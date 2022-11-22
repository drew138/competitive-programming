#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;  // int vec
typedef vector<vi> vvi;  // int vec vec
typedef vector<pii> vpi; // int int pair vec

const double pi = 3.1415926535897932384626433832795;
const int maxn = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll INFLL = 1000000000000000005LL;
const ld EPS = 1e-9;
int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};

#define d(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define forab(i, a, b) for (int i = a; i < (int)b; ++i)
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

ll get_sum(vector<ll> &arr, ll d, ll mid) {
  ll total = 0;
  // cout << "here" << nl;
  forn(i, mid + 1) {
    if (i < arr.size()) {
      total += arr[i];
    }
  }
  total *= d / (mid + 1);
  ll remainder = d % (mid + 1);
  forn(i, remainder) {
    if (i < arr.size()) {
      total += arr[i];
    }
  }
  return total;
}

ll binary_search(vector<ll> &arr, ll c, ll d) {
  ll l = 0, r = d + 1, mid = 0;
  while (l + 1 < r) {
    mid = (r - l) / 2 + l;
    ll total = get_sum(arr, d, mid);
    if (total >= c) {
      l = mid;
    } else {
      r = mid;
    }
  }
  return l;
}

int main() {
  ios

      int t;
  cin >> t;
  in(t) {
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> arr;
    forn(i, n) {
      ll tmp;
      cin >> tmp;
      arr.push_back(tmp);
    }
    sort(all(arr), greater<ll>());
    ll num = binary_search(arr, c, d);
    ll total = get_sum(arr, d, num);
    if (num == 0) {
      if (total < c) {
        cout << "Impossible" << nl;
      } else {
        cout << 0 << nl;
      }
    } else if (num >= d) {
      if (total >= c) {
        cout << "Infinity" << nl;
      } else {
        cout << n << nl;
      }
    } else {
      cout << num << nl;
    }
  }
}
