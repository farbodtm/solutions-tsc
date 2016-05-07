#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  ll n;
  cin >> n;
  map<ll,ll> lang;
  ll tmp;
  for (ll i = 0; i < n; i++) {
    cin >> tmp;
    lang[tmp]++;
  }
  ll m;
  cin >> m;
  std::vector<ll> b(m);
  for (ll i = 0; i < m; i++) {
    cin >> b[i];
  }

  std::vector<ll> c(m);
  for (ll i = 0; i < m; i++) {
    cin >> c[i];
  }

  ll mx = INT_MIN;
  ll mxb = INT_MIN;
  ll mxc = INT_MIN;
  for (ll i = 0; i < m; i++) {
    if (lang[b[i]] > mxb) {
      mx = i+1;
      mxb = lang[b[i]];
      mxc = lang[c[i]];
    } else if (lang[b[i]] == mxb) {
      if (lang[c[i]] > mxc) {
        mx = i+1;
      mxb = lang[b[i]];
      mxc = lang[c[i]];
      }
    }
  }
  for (ll i = 0; i < m; i++) {
    if (lang[b[i]] > mxb) {
      mx = i+1;
      mxb = lang[b[i]];
      mxc = lang[c[i]];
    } else if (lang[b[i]] == mxb) {
      if (lang[c[i]] > mxc) {
        mx = i+1;
        mxb = lang[b[i]];
        mxc = lang[c[i]];
      }
    }
  }
  cout << mx << endl;


  return 0;
}
