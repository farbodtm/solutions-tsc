#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isEqual(string a, string b) {
  if (a==b) return true;
  if (a.size() % 2 != 0) {
    return a == b;
  } else {
    string a1 = a.substr(0, a.length()/2);
    string a2 = a.substr(a.length()/2,a.length()/2);
    string b1 = b.substr(0, b.length()/2);
    string b2 = b.substr(b.length()/2,b.length()/2);
    return ((isEqual(a1,b1) && isEqual(a2,b2)) || (isEqual(a1,b2) && isEqual(a2,b1)));
  }
}

int main() {
  string s1, s2;
  ios_base::sync_with_stdio(false);
  cin >> s1 >> s2;
  if (isEqual(s1, s2)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
