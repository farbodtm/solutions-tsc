#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr;
  int tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    arr.push_back(tmp);
  }
  sort(arr.begin(), arr.end());
  vector<int> arr2;
  int head = 0;
  int tail = n-1;
  for (int j = 0; j < n; j++) {
    if ((j + 1) % 2 == 1) {
      arr2.push_back(arr[head]);
      head++;
    } else {
      arr2.push_back(arr[tail]);
      tail--;
    }
  }
print:
  for (int i = 0; i < n; i++) {
    cout << arr2[i];
    if (i != n-1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}
