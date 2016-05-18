#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  string line;
  int count = 1;
  while (line.length() < n+1) {
    int num = count;
    stringstream str;
    str << num;
    line += str.str();
    count++;
  }
  cout << line[n-1] << endl;

  return 0;
}
