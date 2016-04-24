#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, double> point;

double area(point p1, point p2, point p3, point p4) {
  double t1 = 0.5 * abs(((p1.first - p3.first)*(p2.second-p1.second))-((p1.first-p2.first)*(p3.second-p1.second)));
  double t2 = 0.5 * abs(((p1.first - p4.first)*(p2.second-p1.second))-((p1.first-p2.first)*(p4.second-p1.second)));
  if (t1 == 0 || t2 == 0) return 0.0;
  return t1+t2;
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
  double mx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        for (int l = k + 1; l < n; l++) {
          mx = max(mx, area(points[i], points[j], points[k], points[l]));
        }
      }
    }
  }
  cout << mx << endl;
  return 0;
}
