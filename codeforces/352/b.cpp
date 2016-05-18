#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  if (n > 26) {
    cout << -1 << endl;
  } else {
    int ans = 0;
    int a[26] = { 0 };
    for (int i = 0; i < n; i++) {
      a[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
      if (a[i] > 1) ans += a[i] - 1;
    }
    cout << ans << endl;
  }
  return 0;
}
