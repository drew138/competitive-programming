#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> p;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cin >> tmp;
      p.push_back(tmp);
    }
    int min_v = p[0], max_v = p[0];
    for (int v : p) {
      min_v = min(v, min_v);
      max_v = max(v, max_v);

      if (max_v - min_v > (2 * x)) {
        // cout << "here" << v << min_v << " " << max_v << endl;
        ans++;
        min_v = v;
        max_v = v;
      }
    }
    cout << ans << '\n';
  }
}
