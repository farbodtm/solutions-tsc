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
  for (int i = 0; i < command.length(); i++) {
    switch(command[i]) {
      case 'L':
        p--;
        break;
      case 'R':
        p++;
        break;
      case 'D':
        if (line[p] == '(') {
          int o = p;
          int open = 1;
          while (open != 0) {
            o++;
            if (line[o] == ')') open--;
            else open++;
          }
          line.replace(p, o-p+1, "");
          if (p >= line.length()) p = line.length()-1;

        } else {
          int o = p;
          int open = 1;
          while (open != 0) {
            o--;
            if (line[o] == '(') open--;
            else open++;
          }
          line.replace(o, p-o+1, "");
          p = o;
          if (p >= line.length()) p = line.length()-1;
        }
        break;
    }
    //cout << line << endl;
    //cout << p << endl;
    //cout << "---" << endl;
  }
  cout << line << endl;
  

  return 0;
}
