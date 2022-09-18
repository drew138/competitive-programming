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

int main() {
  ios int t;
  cin >> t;

  in(t) {
    int n;
    cin >> n;
    int min_val = imax, max_val = imin;
    vector<int> arr;
    forn(i, n) {
      int tmp;
      cin >> tmp;
      min_val = min(min_val, tmp);
      max_val = max(max_val, tmp);
      arr.push_back(tmp);
    }
    if (arr[0] == min_val || arr[n - 1] == max_val) {
      cout << max_val - min_val << nl;
    } else {
      int ans = imin;
      for (int i = 1; i < n; ++i) {
        ans = max(ans, arr[i - 1] - arr[i]);
        ans = max(ans, arr[i] - arr[0]);
      }
      for (int i = 0; i + 1 < n; ++i) {
        ans = max(ans, arr[n - 1] - arr[i]);
      }
      ans = max(arr[n - 1] - arr[0], ans);
      cout << ans << nl;
    }
  }
}
