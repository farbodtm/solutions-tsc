#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n,m,k;
  cin >> n >> m >> k;
  deque<int> items;
  int tmp;
  for (int i = 0; i < k; i++) {
    cin >> tmp;
    items.push_back(tmp);
  }
  int ans = 0;
  for (int i = 0; i < n*m; i++) {
    cin >> tmp;
    for (int j = 0; j < items.size(); j++) {
      if (items[j] == tmp) {
        ans += j + 1;
        items.erase(items.begin()+j);
        items.push_front(tmp);
        break;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
