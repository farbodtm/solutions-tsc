#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int k;

bool compare(pair<int, int> a, pair<int, int> b) {
  return (b.first - b.second*k) < (a.first - a.second*k);
}

int balance(pair<int,int> ab) {
  return ab.first - ab.second*k;
}

int main() {
  int n;
  cin >> n >> k;
  vector<int> a(n+1);
  vector<int> b(n+1);
  int tmp;
  for (int i = 1; i <= n; i++) {
    cin >> tmp;
    a[i] = tmp;
  }
  for (int i = 1; i <= n; i++) {
    cin >> tmp;
    b[i] = a[i] - k*tmp;
  }
  vector<vector<int> > dp(102, vector<int>(200011, -1));
  int s = 100000;
  dp[0][s] =0;

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < s+s; j++) {
      if (i) dp[i][j] = max(dp[i][j], dp[i-1][j]);
      if (j + b[i] <= s+s && j+b[i] >= 0 && dp[i][j] != -1) {
        dp[i+1][j+b[i]] = max(dp[i+1][j+b[i]], dp[i][j] + a[i]);
      }
    }
  }
  dp[n+1][s] = max(dp[n+1][s], dp[n][s]);
  if (dp[n+1][s] > 0) cout << dp[n+1][s] << endl;
  else cout << -1 << endl;

  return 0;
}
