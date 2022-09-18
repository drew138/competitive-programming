#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int num = 0;

    for (int i = 0; i < n; ++i) {
      int prev = i > 0 ? a[i - 1] : INT_MIN;
      int tmp = a[i];
      while (i + 1 < n && a[i + 1] == tmp)
        ++i;
      int next = i + 1 < n ? a[i + 1] : INT_MIN;

      num += a[i] > prev && a[i] > next;
    }
    cout << (num <= 1 ? "YES" : "NO") << '\n';
  }
}
