#include <bits/stdc++.h>
using namespace std;
//ios::sync_with_stdio(false);cin.tie(0);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

#define MOD 1000000007

using namespace std;

long long C[2222][2222],a[1111],n,sum=0,ans=1;

void pre_comp() {
  C[0][0]=1;
  for(int i=1;i<=2001;++i) {
    C[i][0]=1;
    for(int k=1;k<=i;++k) {
      C[i][k]=C[i-1][k]+C[i-1][k-1];
      C[i][k]=C[i][k]%MOD;
    }
  }
}

int main() {
 
  pre_comp();
  cin>>n;
  for(int i=0;i<n;++i) cin>>a[n-i-1];
  for(int i=n-1;i>=0;i--) {
    ans=(1LL*ans*C[sum+a[i]-1][a[i]-1])%MOD;
    sum+=a[i];
  }
  cout<<ans;
}