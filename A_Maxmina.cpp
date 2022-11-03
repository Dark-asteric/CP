#include<bits/stdc++.h>
using namespace std;
 
int32_t main() {
  int tc; 
  cin >>tc;
  while (tc--) {
    int n, k;
    cin >> n >> k;
    bool ok = false;
    while (n--) {
      int x; 
      cin>>x;
      ok |= x == 1;
    }
    if (ok) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}