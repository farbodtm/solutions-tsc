#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  long long d[2000000][2];
  if (s2[0] == '0') {
    d[0][0] = 1;
    d[0][1] = 0;
  } else {
    d[0][0] = 0;
    d[0][1] = 1;
  }
  for (int i = 1; i < s2.length(); i++) {
    if (s2[i] == '0') {
      d[i][0] = d[i-1][0] + 1;
      d[i][1] = d[i-1][1];
    } else {
      d[i][0] = d[i-1][0];
      d[i][1] = d[i-1][1] + 1;
    }
  }

  long long ans = 0;
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] == '0') {
      ans += d[i + s2.length() - s1.length()][1];
      if (i != 0) ans -= d[i-1][1];
    } else {
      ans += d[i + s2.length() - s1.length()][0];
      if (i != 0) ans -= d[i-1][0];
    }
  }
  cout << ans << endl;
  return 0;
}
