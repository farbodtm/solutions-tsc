#include <bits/stdc++.h>

using namespace std;

int main() {
  int mmin = 0;
  int mmax = 366;
  int n;
  cin >> n;
  std::vector<pair<int, int> > g;
  std::vector<int> gg;
  char ggtmp;
  int stmp, etmp;
  for (int i = 0; i < n; i++) {
    cin >> ggtmp >> stmp >> etmp;
    g.push_back(make_pair(stmp, etmp));
    if (ggtmp == 'M') {
      gg.push_back(-1);
    } else {
      gg.push_back(1);
    }
    mmin = min(mmin, stmp);
    mmax = max(mmax, etmp);
  }
  int ans = 0;
  for (int day = mmin; day <= mmax; day++) {
    int tmp = 0;
    int anstmp = 0;
    for (int i = 0; i < g.size(); i++) {
      if (g[i].first <= day && g[i].second >= day) {
        anstmp++;
        tmp += gg[i];
      }
    }
    ans = max(ans, anstmp - abs(tmp));
  }
  cout << ans << endl;
  return 0;
}
