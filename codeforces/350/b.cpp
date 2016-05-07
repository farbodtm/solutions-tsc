#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (lli = 0; i < n; i++) {
    cin >> a[i];
  }
  ll c = 0;
  for (int i = 1; i <= n; i++) {
    c += i;
    if (c >= k) {
      cout << a[k - c + i - 1] << endl;
      break;
    }
  }
  return 0;
}
