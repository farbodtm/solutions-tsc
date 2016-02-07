#include <bits/stdc++.h>

using namespace std;

int main() {
      ios_base::sync_with_stdio(0);

          cin.tie(0);

  string big;
  string small;
  cin >> big >> small;
  int ans = 0;
  int lastfound = -1;

  for (int i = 0; i < big.length(); i++) {
    //cout << "At" << i << endl;
    if (big.find(small, i) != string::npos) {
      //cout << "found:" << big.find(small, i) << endl;
      //cout << "lastfound" << lastfound << endl;
    if (lastfound == -1 || lastfound + small.length() <= big.find(small, i)) {
        //cout << "ok add this" << endl;
        ans++;

      lastfound = big.find(small, i);
      i += small.size() - 1;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
