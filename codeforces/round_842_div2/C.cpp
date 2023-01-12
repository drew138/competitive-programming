#include <bits/stdc++.h>
#include <queue>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;  // int vec
typedef vector<vi> vvi;  // int vec vec
typedef vector<pii> vpi; // int int pair vec

#define d(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define forab(i, a, b) for (int i = a; i < (int)b; ++i)
#define fored(i, l, r) for (int i = (int)r; i >= (int)l; --i)
#define foreach(a, b) for (auto &(a) : (b))
#define formap(map) for (const auto &[key, value] : map)
#define all(v) v.begin(), v.end()
#define allar(arr, sz) arr, arr + sz
#define ms(ar, val) memset(ar, val, size)
#define pq(type) priority_queue<type>
#define pqd(type) priority_queue<type, vector<type>, greater<type>>
#define umap unordered_map
#define uset unordered_set
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define nl "\n"
#define in(t) while (t--)

const double pi = acos(-1);
const int maxn = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll INFLL = 1000000000000000005LL;
const ld EPS = 1e-9;
int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};

// snippets
// hash: hash used for pairs used in unordered maps
// comp: comparator of pairs used for priority queues
// _ncrmod: choose function for big numbers using modulo
// _ncr: choose function
// _nprmod: permutation function for big numbers using modulo
// _npr: permutation function
// sieve: sieve of eratosthenes

int main() {
  ios cout << setprecision(20) << fixed;
  int t;
  cin >> t;
  in(t) {
    int n;
    cin >> n;
    vector<int> a(n), f(n + 1), p, q;

    forn(i, n) {
      cin >> a[i];
      f[a[i]]++;
    }
    if (n == 1 && a[0] == 1) {
      cout << "YES" << nl;
      cout << 1 << nl;
      cout << 1 << nl;
      continue;
    }
    bool ans = true;
    if (f[1] > 1)
      ans = false;
    forab(i, 2, n + 1) {
      if (f[i] > 2) {
        ans = false;
      }
    }
    if (f[2] >= 2 && f[1] != 0)
      ans = false;
    if (!ans) {
      cout << "NO" << nl;
      continue;
    }
    priority_queue<int> pq1, pq2;

    forab(i, 1, n + 1) {
      if (f[i] == 0) {
        pq1.push(i);
      } else if (f[i] == 2) {
        pq2.push(i);
      }
    }
    map<int, int> m;
    while (pq1.size()) {
      int first = pq1.top(), second = pq2.top();
      pq1.pop();
      pq2.pop();
      m[first] = second;
      m[second] = first;
    }
    vector<bool> seen(n + 1, false);
    forn(i, n) {
      if (f[a[i]] == 1) {
        p.push_back(a[i]);
        q.push_back(a[i]);
      } else if (seen[a[i]]) {
        if (max(a[i], m[a[i]]) != a[i]) {

          ans = false;
          break;
        }
        p.push_back(a[i]);
        q.push_back(m[a[i]]);
      } else {
        seen[a[i]] = true;
        if (max(a[i], m[a[i]]) != a[i]) {

          ans = false;
          break;
        }
        p.push_back(m[a[i]]);
        q.push_back(a[i]);
      }
    }
    if (!ans) {
      cout << "NO" << nl;
      continue;
    }
    cout << "YES" << nl;
    forn(i, n) { cout << p[i] << " "; }
    cout << nl;
    forn(i, n) { cout << q[i] << " "; }
    cout << nl;
  }
}
