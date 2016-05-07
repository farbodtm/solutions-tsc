#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int mn = (n/7)*2 + max(0, (n%7)-5);
  int mx = (n/7)*2 + min(n%7, 2);
  cout << mn << " " << mx << endl;
  return 0;
}
