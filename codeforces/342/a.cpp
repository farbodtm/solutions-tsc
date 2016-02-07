#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll a,b,c;
  cin >> a >> b >> c;
  ll tmp = n;
  ll p = tmp / a;
  tmp = tmp % a;
  if (tmp >= b) {
    tmp -= b;
    p += tmp / (b-c);
    p++;
  }
  ll g = 0;
  tmp = n;
  tmp -= b;
  if (tmp >= 0) {
      g++;
    g += tmp / (b-c);
    tmp = tmp % (b-c);
    tmp += c;

    if (tmp / a >= 1) {
      g += (tmp/a);
    }
  }

  cout << std::max(g, p) << std::endl;
  return 0;
}
