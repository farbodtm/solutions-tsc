#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n,m;
  cin >> n>>m;
  if (m > n) {
    cout << -1 << endl;
    return 0;
  }
  int ans = ceil((double)n/(double)2);
  if (ans % m != 0) {
    ans += m-(ans %m);
  }
  cout << ans << endl;

  return 0;
}
