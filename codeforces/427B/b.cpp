#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, c;
  cin >> n >> t >> c;
  int tmp;

  vector<int> arr;
  cin >> tmp;

  if (tmp > t) {
    arr.push_back(0);
  } else {
    arr.push_back(-1);
  }

  for (int i = 1; i < n; i++) {
    cin >> tmp;
    if (tmp > t) {
      arr.push_back(i);
    }
  }
  arr.push_back(n);

  int ans = 0;
  for (int i = 1; i < arr.size(); i++) {
    ans += max(0, (arr[i] - arr[i-1] - 1) - c + 1);
  }
  
  cout << ans;
  return 0;
}
