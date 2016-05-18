#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(const vector<int>& have,const vector<int>& need, ll num, ll m) {
  for (int i = 0; i < have.size(); i++) {
    if (have[i]/need[i] >= num) {
      continue;
    } else {
      m -= num*need[i]-have[i];
    }
    if (m < 0) return false;
  }
  return true;
}

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
  ll l = 0;
  ll r = INT_MAX;
  while (l < r) {
    ll mid = (l+r+1)/2;
    if (check(have, need, mid, m)) l = mid;
    else r = mid-1;
  }
  cout << l << endl;
  return 0;
}
