#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;
  std::vector<int> column(n);
  int row;
  int ans = 0;
  string tmp;
  for (int i = 0; i < n; i++) {
    row = 0;
    cin >> tmp;
    for (int j = 0; j < n; j++) {
      if (tmp[j] == 'C') {
        row++;
        column[j]++;
      }
    }
    ans += (row * (row-1))/2;
  }
  for (int i = 0; i < n; i++) {
    if (column[i] != 0) {
      ans += (column[i] * (column[i]-1))/2;
    }
  }
  cout << ans << endl;
  return 0;
}
