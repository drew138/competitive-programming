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
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    ll total = 0;
    forn(i, n) {
      cin >> arr[i];
      forn(j, m) { total += arr[i][j] - '0'; }
    }
    int mm = 4;
    forn(i, n - 1) {
      forn(j, m - 1) {
        int tmp = (arr[i][j] - '0') + (arr[i + 1][j] - '0') +
                  (arr[i][j + 1] - '0') + (arr[i + 1][j + 1] - '0');
        mm = min(mm, tmp);
      }
    }
    if (mm <= 2) {
      cout << total << nl;
    } else {
      int dif = mm - 2;
      cout << total - dif << nl;
    }
  }
}
