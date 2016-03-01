#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl
int hs[1000000];
int main()
 {
  
  int n, m;
  cin >> n >> m;
  for(int i = 0 ; i < m; i++) {
    int aa, bb;
    cin >> aa >> bb;
    hs[aa] = hs[bb] = 1;
  } 
  int x;
  for(int i = 1; i <= n; i++) {
    if(!hs[i]) {
      x = i;
      break;
    }
  }
  
  cout << n - 1 << endl;

  for(int i = 1; i <= n; i++) {
    if(i == x) continue;
    cout << x << " " << i << endl;
  }

}