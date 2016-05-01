#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int dis[5005][5005];
vector<int> graph[5005];

int main() {
  memset(dis, -1, sizeof dis);
  int n, m;
  cin >> n >> m;
  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a;
    cin >> b;
    a--,b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  int s1,t1,l1,s2,t2,l2;
  cin >> s1 >> t1 >> l1 >> s2 >> t2 >> l2;
  s1--,s2--,t1--,t2--;

  for (int i = 0; i < n; i++) {
    queue<int> q;
    q.push(i);
    dis[i][i] = 0;
    while (!q.empty()) {
      int s = q.front();
      q.pop();

      for(int j = 0; j < int(graph[s].size()); j++) {
        int to =  graph[s][j];
        if (dis[i][to] == -1) {
          dis[i][to] = dis[i][s] + 1;
          q.push(to);
        }
      }
    }
  }

  int ans = m + 1;
  for(int it= 0; it< 2; it++){
    swap(s1, t1);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        int v[] = {dis[s1][i] + dis[i][j] + dis[j][t1], dis[s2][i] + dis[i][j] + dis[j][t2]};
        if (v[0] <= l1 && v[1] <= l2) {
          ans = min(ans, v[0] + v[1] - dis[i][j]);
        }
      }
    }
  }

  if (dis[s1][t1] <= l1 && dis[s2][t2] <= l2) {
    ans = min(ans, dis[s1][t1] + dis[s2][t2]); 
  }

  if (ans > m) {
    ans = -1;
  } else {
    ans = m - ans;
  }
  cout << ans << endl;

  return 0;
}
