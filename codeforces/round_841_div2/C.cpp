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
  cout << setprecision(20) << fixed;
  vector<ll> sq;

  ll cur = 0;
  while ((cur * cur) < 2e6) {
    sq.push_back(cur * cur);
    cur++;
  }

  ll t;
  cin >> t;

  in(t) {
    ll n;
    cin >> n;
    ll ans = (n * (n + 1)) / 2;

    vector<ll> nums(n), prefix(n), counter(2 * n, 0);
    forn(i, n) cin >> nums[i];
    prefix[0] = nums[0];
    counter[0] = 1;
    forab(i, 1, n) prefix[i] = nums[i] ^ prefix[i - 1];
    for (ll i = 0; i < n; ++i) {
      for (ll j = 0; j < sq.size(); ++j) {
        if ((sq[j] ^ prefix[i]) < 2 * n) {
          ans -= counter[sq[j] ^ prefix[i]];
        }
      }
      counter[prefix[i]]++;
    }
    cout << ans << nl;
  }
}
