#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = (a+b)%n;
  if (ans < 0) ans = n + ans;
  if (ans == 0) ans = n;
  cout << ans << endl;

  return 0;
}
