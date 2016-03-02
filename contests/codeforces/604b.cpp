#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
typedef long long LL;

int main(){
  int n, k;
  cin >> n >> k;
  int s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  // sort(s,s+n);
  int r = s[n-1];
  for(int i = 0; i < (n-k); i++){
    r = max(r,s[i]+s[2*(n-k)-1-i]);
  }
  cout << r << endl;

}