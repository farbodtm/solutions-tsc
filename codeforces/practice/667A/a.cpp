#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  double d,h,v,e;
  cin >> d >> h >> v >> e;
  double area = M_PI*(d/2)*(d/2);
  double vh = v / area;
  if (vh > e) {
    cout << "YES" << endl;
    cout << setprecision(10) << h/(vh - e)<< endl;
  } else {
    cout << "NO"<< endl;
  }

  return 0;
}
