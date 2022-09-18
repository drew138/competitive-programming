#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int minx = 0, maxx = 0, miny = 0, maxy = 0;
    for (int i = 0; i < n; ++i) {
      int x, y;
      cin >> x >> y;
      minx = min(x, minx);
      maxx = max(x, maxx);
      miny = min(y, miny);
      maxy = max(maxy, y);
    }
    cout << (2 * (maxx - minx) + 2 * (maxy - miny)) << '\n';
  }
}
