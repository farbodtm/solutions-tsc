#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, at, b, bt;
  string line;
  cin >> a >> at >> b >> bt >> line;
  stringstream stream(line);
  string num;
  getline(stream, num, ':');
  int h, m;
  h = atoi(num.c_str());
  getline(stream, num, ':');
  m = atoi(num.c_str());

  m += h*60;

  int ans = 0;
  for (int x2 = 5 * 60 + 0; x2 < 24 * 60; x2 += b) {
    int y2 = x2 + bt;
    int x = max(m, x2), y = min(m+at, y2);
    if (x < y)
      ans++;
  }
  cout << ans << endl;
  return 0;
}
