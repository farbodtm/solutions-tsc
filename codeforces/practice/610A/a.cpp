#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  if (n % 2 == 0) ans = n/4;
  if (n % 4 == 0) ans--;
  cout << ans << endl;
  
  return 0;
}
