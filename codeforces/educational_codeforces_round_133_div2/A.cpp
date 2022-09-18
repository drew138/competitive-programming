#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    int ans = 0, cur = 0;
    int n;
    cin >> n;
    if (n == 1) {
      ans = 2;
      cout << ans << '\n';
      continue;
    }
    ans += n / 3;
    n %= 3;
    if (n) {
      ans += 1;
    }
    cout << ans << '\n';
  }
}
