#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int c = 0;
  while (true) {
    c += (ans * (ans+1))/2;
    if (c > n) break;
    ans++;
  }
  ans--;
  cout << ans << endl;


  return 0;
}
