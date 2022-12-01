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

void solve();

int main() { solve(); }

#define int long long

void solve() {
  ios int t;
  cin >> t;
  in(t) {
    int n, x, y;
    cin >> n >> x >> y;
    string a, b;
    cin >> a >> b;
    if (a == b) {
      cout << 0 << nl;
      continue;
    }
    vector<int> dif;
    forn(i, n) {
      if (a[i] != b[i])
        dif.push_back(i);
    }
    if (dif.size() % 2 == 1) {
      cout << -1 << nl;
      continue;
    }

    int ans = 0;
    int total_adj = 0;
    for (int i = 1; i < dif.size(); ++i) {
      if (dif[i] == (dif[i - 1] + 1)) {
        total_adj += 2;
        i++;
      }
    }
    int m = dif.size() / 2;
    total_adj /= 2;
    // cout << "m: " << m << nl;
    // cout << "total: " << total_adj << nl;
    if (x < y) {
      ans += x * total_adj + (m - total_adj) * y;
    } else if (total_adj == 1 && m == 1 && n == 2) {
      ans += x * total_adj;
    } else if (total_adj == m && m == 1) {
      ans += min(x, 2 * y);
    } else {
      ans += y * m;
    }

    cout << ans << nl;
  }
}
