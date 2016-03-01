#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  //int a,b,c;
  int a[3];

  cin>>a[0]>>a[1]>>a[2];
  int p = a[0]+a[1]+a[2];
  int q = (a[0]*a[1])*a[2];
  int t = a[0]*(a[1]*a[2]);
  int r = a[0]+(a[1]*a[2]);
  int u = (a[0]+a[1])*a[2];
  int s = (a[0]*a[1])+a[2];
  int v = (a[0])*(a[1]+a[2]);
  int res = max(p,max(q,max(r,max(s,max(t,max(u,v))))));
  cout<<res<<endl;
}
