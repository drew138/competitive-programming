#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int total = a + b + c + d;
    if (total == 4) {
      cout << 2 << '\n';
    } else if (total > 0) {
      cout << 1 << '\n';
    } else {
      cout << 0 << '\n';
    }
  }
}
