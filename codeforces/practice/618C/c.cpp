#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

typedef long long ll;
typedef pair<double, double> point;

struct Point {
  ll x,y;
  int i;
};

ll dis(Point a, Point b) {
  return (a.x-b.x) *(a.x-b.x) + (a.y-b.y) * (a.y-b.y);
}

struct cmp {
  cmp(Point z) : z_(z) {};
  bool operator () (const Point& a, const Point b) {
    return dis(z_, a) < dis(z_, b);
  }
  Point z_;
};

bool lie(const Point& a, const Point& b, const Point& c) {
    return b.x * c.y - b.y * c.x - (a.x * c.y - a.y * c.x) + a.x * b.y - a.y * b.x == 0;
}

int main() {
  std::cin.sync_with_stdio(false);
  int n;
  cin >> n;
  vector<Point> stars(n);
  double x,y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    stars[i].x = x;
    stars[i].y = y;
    stars[i].i = i+1;
  }
  sort(stars.begin() + 1, stars.end(), cmp(stars[0]));
  for (int i = 2; i < n; i++) {
    if (!lie(stars[0], stars[1], stars[i])) {
      cout << stars[0].i << " " << stars[1].i << " " << stars[i].i << endl;
      break;
    }
  }

  return 0;
}
