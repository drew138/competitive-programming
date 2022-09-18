#include <bits/stdc++.h>

using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
      int tmp;
      cin >> tmp;
      arr.push_back(tmp);
    }
    int ans = 0;
    if (k == 1) {
      ans = ((n - 2) / 2) + (n % 2 == 1);
    } else {
      for (int i = 1; i + 1 < n; ++i) {
        if (arr[i - 1] + arr[i + 1] < arr[i])
          ans++;
      }
    }
    cout << ans << '\n';
  }
}
