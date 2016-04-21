#include <bits/stdc++.h>
using namespace std;

int main() {
  int h1,h2,a,b;
  cin >> h1 >> h2 >> a >> b;
  int h = h2-h1;
  int ans = 0;
  if (h - (8 * a) <= 0) {
    cout << ans << endl;
    return 0;
  }
  h -= (8 * a);
  if (a-b <= 0) {
    cout << -1 << endl;
    return 0;
  }

  int ch = h;
  while (ch > 0) {
    ch -= ((a-b)*12);
    ans++;
  }
  cout << ans << endl;

  return 0;
}
