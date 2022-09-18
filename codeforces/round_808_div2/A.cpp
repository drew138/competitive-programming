#include <bits/stdc++.h>

using namespace std;

int main() {

  int t;

  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }
    bool ans = true;
    for (int i = 1; i < n; ++i) {
      if (arr[i] % arr[i - 1] != 0) {
        ans = false;
        break;
      }
      arr[i] = arr[i - 1];
    }
    cout << (ans ? "YES" : "NO") << endl;
  }
}
