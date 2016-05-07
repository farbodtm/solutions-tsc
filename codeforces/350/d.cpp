#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> need(n);
  for (int i = 0; i < n; i++) {
    cin >> need[i];
  }

  vector<int> have(n);
  for (int i = 0; i < n; i++) {
    cin >> have[i];
  }

  vector<int> d(n);
  int mn = INT_MAX;
  for (int i = 0; i < n; i++) {
    mn = min(mn, have[i]/need[i]);
  }

  int ans = 0;
  ans += mn;
  for (int i = 0; i < n; i++) {
    have[i] -= (mn * need[i]);
  }

  while (m > 0) {
    bool allg = true;
    ll all0 = 0;
    for (int i = 0; i < n; i++) {
      have[i] -= need[i];
      if (have[i] < 0) {
        m += have[i];
        have[i] = 0; 
        all0++;
      }
      if (m < 0) allg = false;
    }
    if (allg) ans++;
    if (all0 == n) break;
  }
  if (m > 0) {
    ll needsum = 0;
    for (int i = 0; i < n; i++) {
      needsum += need[i];
    }
    ans += m/needsum;
  }
  cout << ans << endl;

  return 0;
}
