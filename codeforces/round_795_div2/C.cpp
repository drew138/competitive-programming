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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ones = 0;
    int total = 0;
    forn(i, n) ones += s[i] - '0';
    if (s[n - 1] == '1')
      ones--;
    if (ones > 0 && s[n - 1] == '0') {
      int count = 0;
      int index = n - 1;
      while (s[index] == '0')
        index--;

      int tmp = (n - 1) - index;
      if (tmp <= k) {
        k -= tmp;
        ones--;
        swap(s[n - 1], s[index]);
      }
    }
    if (ones > 0) {
      int count = 0;
      int index = 0;
      while (s[index] == '0')
        index++;
      if (index <= k) {
        k -= index;
        swap(s[0], s[index]);
      }
    }
    int ans = 0;
    forn(i, n - 1) {
      char cur = s[i], next = s[i + 1];
      int tmp = 0;
      if (cur == '1')
        tmp += 10;
      if (next == '1')
        tmp += 1;
      ans += tmp;
    }
    cout << ans << nl;
  }
}
