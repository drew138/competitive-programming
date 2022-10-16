#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;   // ll vec
typedef vector<vi> vvi;  // ll vec vec
typedef vector<pii> vpi; // ll ll pair vec

const double pi = 3.1415926535897932384626433832795;
const ll maxn = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll INFLL = 1000000000000000005LL;
const ld EPS = 1e-9;
ll dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
ll diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};

#define d(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (ll i = 0; i < (ll)n; ++i)
#define forab(i, a, b) for (ll i = a; i < (ll)b; ++i)
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

int main() {
  ios ll t;
  cin >> t;
  in(t) {
    ll n;
    cin >> n;
    ll total = 0;
    forn(i, n) {
      ll tmp;
      cin >> tmp;
      while (tmp % 2 == 0 && tmp != 0) {
        tmp /= 2;
        total += 1;
      }
    }
    ll dif = total - n;
    if (dif < 0) {
      vector<ll> nums;
      for (ll i = 1; i <= n; ++i) {
        ll cur = 0;
        ll num = i;
        while (num % 2 == 0 && num != 0) {
          cur++;
          num /= 2;
        }
        nums.push_back(cur);
      }
      sort(all(nums), greater<ll>());
      ll answer = 0;
      forn(i, n) {
        dif += nums[i];
        answer++;
        if (dif >= 0)
          break;
      }
      cout << (dif >= 0 ? answer : -1) << nl;
    } else {
      cout << 0 << nl;
    }
  }
}
