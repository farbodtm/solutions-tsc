#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  int n, m, p;
  cin >> n >> m >> p;
  string line;
  cin >> line;
  string command;
  cin >> command;
  p--;
  vector<int> l(n+1), r(n+1), d(n+1);
  for (int i = 0; i < n; i++) {
    l[i] = i-1, r[i] = i+1;
  }

  stack<int> s;
  for (int i = 0; i < n; i++) {
    if (line[i] == '(') s.push(i);
    else {
      int pos = s.top();
      s.pop();
      d[pos] = i;
      d[i] = pos;
    }
  }
  l[0] = n;
  r[n] = 0;

  for (int i = 0; i < command.length(); i++) {
    switch(command[i]) {
      case 'L':
        p = l[p];
        break;
      case 'R':
        p = r[p];
        break;
      case 'D':
        int pf = d[p];
        if (pf > p) swap(p, pf);
        l[r[p]] = l[pf];
        r[l[pf]] = r[p];
        p = r[p];
        if (p==n) p =l[p];
        break;
    }
  }
  p = n;
  while (true) {
    p = r[p];
    if (p == n) break;
    cout << line[p];
  }

  return 0;
}
