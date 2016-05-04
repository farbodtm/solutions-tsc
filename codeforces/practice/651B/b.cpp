#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int, int> cnt;
int main() {
  int n;
  cin >> n;
  int tmp, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    ans = max(ans, ++cnt[tmp]);
  }
  cout << n - ans << endl;

  return 0;
}
