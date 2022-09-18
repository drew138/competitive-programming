#include <bits/stdc++.h>

using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> arr;
    unordered_map<int, int> mm;
    vector<pair<int, int>> connections;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cin >> tmp;
      arr.push_back(tmp);
    }
    for (int i = 0; i < m; ++i) {
      int x, y;
      cin >> x >> y;
      mm[x - 1]++;
      mm[y - 1]++;
      connections.push_back({x - 1, y - 1});
    }
    if (m & 1) {
      ans = INT_MAX;
      for (auto &it : mm) {
        if (it.second & 1) {
          ans = min(ans, arr[it.first]);
        }
      }
      for (int i = 0; i < connections.size(); ++i) {
        if (mm[connections[i].first] % 2 == 0 &&
            mm[connections[i].second] % 2 == 0) {
          ans =
              min(ans, arr[connections[i].first] + arr[connections[i].second]);
        }
      }
    }

    cout << ans << endl;
  }
}
