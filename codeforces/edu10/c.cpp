#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> per;
  int tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    per.push_back(tmp);
  }
  map<int, vector<int> > foes;
  int f,s;
  for (int i = 0 ; i < m;i++) {
    cin >> f >> s;
    foes[f].push_back(s);
    foes[s].push_back(f);
  }
  long long ans = 0;
  for (int i = 0; i < per.size(); i++) {
    for (int j = i; j < per.size(); j++) {
      int add = true;
      map<int, bool> found;
      for (int k = i; k <= j; k++) {
        if (found.count(per[k])) {
          add = false;
          break;
        }

        for (int o = 0; o < foes[per[k]].size(); o++) {
          found[foes[per[k]][o]] = true;
        }
      }
      if (add) {
        //cout << i << " " << j << endl;
        ans++;
      } else {
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
