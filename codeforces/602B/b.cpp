#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> arr;
  int tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    arr.push_back(tmp);
  }
  int minn = INT_MAX;
  int mini = 0;
  int maxn = INT_MIN;
  int maxi = 0;
  int ans = 0;
  int start = 0;
  for (int i = 0; i < count; i++) {
    if (minn >= arr[i]) {
      if (maxn - arr[i] > 1) {
        ans = max(i-start, ans);
        i = min(maxi, mini)+1;
      }
      minn = arr[i];
      mini = i;
    }
    if (maxn <= arr[i]) {
      if (arr[i] - minn > 1) {
        ans = max(i-start, ans);
        i = min(maxi, mini)+1;
      }
      maxn = arr[i];
      maxi = i;
    }
  }
  
  return 0;
}
