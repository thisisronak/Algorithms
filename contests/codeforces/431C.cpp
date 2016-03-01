#include<bits/stdc++.h>
#define mod 1000000007ll
using namespace std;
int n,k,d;
int f[105][2];
int main()
{
  scanf("%d %d %d",&n,&k,&d);
  f[0][1]=1;
  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=min(i,k); j++)
    {
      f[i][0]=(f[i][0]+f[i-j][j>=d])%mod;
      f[i][1]=(f[i][1]+f[i-j][1])%mod;
    }
  }
  cout<<f[n][0]<<endl;
  return 0;
}