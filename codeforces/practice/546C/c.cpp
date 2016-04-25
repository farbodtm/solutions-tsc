#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n,j2;
  cin >> n;
  int k1, k2;
  cin >> k1;
  queue<int> q1, q2;
  int tmp;

  for (int i = 0; i < k1; i++) {
    cin >> tmp;
    q1.push(tmp);
  }
  cin >> k2;
  for (int i = 0; i < k2; i++) {
    cin >> tmp;
    q2.push(tmp);
  }

  int fight = 0;
  int tmp1, tmp2;
  bool finished = false;
  do {
    fight++;

    tmp1 = q1.front();
    q1.pop();
    tmp2 = q2.front();
    q2.pop();

    if (tmp1 > tmp2) {
      q1.push(tmp2);
      q1.push(tmp1);
    } else {
      q2.push(tmp1);
      q2.push(tmp2);
    }

    if (q1.empty()) {
      cout << fight << " " << 2 << endl;
      finished = true;
      break;
    }

    if (q2.empty()) {
      cout << fight << " " << 1 << endl;
      finished = true;
      break;
    }

  } while(fight < 107);

  if (!finished) {
    cout << -1 << endl;
  }

  return 0;
}
