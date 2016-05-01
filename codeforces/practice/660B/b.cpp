#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n*2; i++) {
    if (m >= i + (n*2)) {
      cout << i + (n*2) << " ";
    }
    if (m >= i) {
      cout << i << " ";
    }
  }

  return 0;
}
