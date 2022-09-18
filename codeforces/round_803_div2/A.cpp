#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    int n, cur = 0;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; ++i) {
      int tmp;
      cin >> tmp;
      cur = cur ^ tmp;
      arr.push_back(tmp);
    }
    cout << arr[0] << '\n';
  }
}
