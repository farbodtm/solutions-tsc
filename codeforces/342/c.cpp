#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector< int > > mat;
  int n, k;
  cin >> n >> k;
  int current = 1;
  for (int i = 0; i < n; i++) {
    vector<int> em(n);
    mat.push_back(em);
  }
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < k-1; j++) {
      mat[i][j] = current;
      current++;
    }
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for(int j = k-1; j < n; j++) {
      mat[i][j] = current;
      if (j == k-1) {
        sum+= current;
      }
      current++;
    }
  }
  cout << sum << endl;
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << mat[i][j] << " "; 
    }
    cout << endl;
  }
  return 0;
}
