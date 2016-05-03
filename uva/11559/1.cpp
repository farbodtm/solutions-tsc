#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;

int main() {
  int n, budget, hotel, w;
  while (cin >> n >> budget >> hotel >> w) {
    int ans = INT_MAX;
    for (int i = 0; i < hotel; i++) {
      int m;
      cin >> m;
      for (int j = 0; j < w; j++) {
        int pn;
        cin >> pn;
        if (pn >= n) {
          ans = min(ans, m*n);
        }
      }
    }
    
    if (ans <= budget) {
      cout << ans << endl;
    } else {
      cout << "stay home" << endl;
    }
  }
  return 0;
}
