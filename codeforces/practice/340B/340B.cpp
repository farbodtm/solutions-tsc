#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, double> point;

double area(point p1, point p2, point p3) {
  return 0.5 * (((p2.first - p1.first)*(p3.second-p2.second))-((p2.second-p1.second)*(p3.first-p2.first)));
}

int main() {
  int n;
  cin >> n;
  vector<point> points;
  for (int i = 0; i < n; i++) {
    double a, b;
    cin >> a >> b;
    points.push_back(make_pair(a, b));
  }
  double ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      double mn = -1;
      double mx = -1;
      for (int k = 0; k < n; k++) {
        if (k != i && k != j) {
          double a = area(points[i], points[j], points[k]);
          if (a < 0) {
            mn = max(mn, -a);
          } else {
            mx = max(mx, a);
          }
        }
      }
      if (mn >= 0 && mx >= 0) {
        ans = max(ans, mn + mx);
      }
    }
  }
  printf("%lf", ans);
  return 0;
}
