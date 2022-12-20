#include <algorithm>
#include <bits/stdc++.h>
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

const double pi = 3.1415926535897932384626433832795;
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

bool check(vector<pair<int, int>> &arr, int mid) {
  int n = arr.size();
  vector<int> suffix(n);
  int cur = arr[n - 1].second;
  for (int i = n - 1; i >= 0; --i) {
    cur = min(cur, arr[i].second);
    suffix[i] = cur;
  }
  int tmp = 0;

  forn(i, n) {
    while (tmp + mid < arr[i].first && mid > 0) {
      tmp += mid;
      mid -= min(suffix[i], mid);
    }
  }
  return (tmp + mid) >= arr[n - 1].first;
}

int main() {
  // ios
  cout << setprecision(20) << fixed;
  int t;
  cin >> t;
  in(t) {
    int n, k;
    cin >> n >> k;
    vector<int> h(n), p(n);
    forn(i, n) cin >> h[i];
    forn(i, n) cin >> p[i];
    vector<pair<int, int>> arr(n);
    forn(i, n) arr[i] = {h[i], p[i]};
    sort(all(arr));
    string ans = check(arr, k) ? "YES" : "NO";
    cout << ans << nl;
  }
}
