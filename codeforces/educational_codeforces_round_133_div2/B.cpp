
#include <bits/stdc++.h>

using namespace std;

void print_arr(vector<int> &arr, int n) {
  for (int i = 0; i + 1 < arr.size(); ++i) {
    cout << arr[i] << " ";
  }
  cout << arr[n - 1] << '\n';
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 1; i <= n; ++i) {
      arr[i - 1] = i;
    }
    cout << n << '\n';
    for (int i = 0; i < n; ++i) {
      print_arr(arr, n);
      int tmp = arr[i];
      arr[i] = arr[n - 1];
      arr[n - 1] = tmp;
    }
  }
}
