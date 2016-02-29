#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int c[100005];

int main()
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n;
  cin>>n;
  // int a[n];
  for(int i=1;i<=n;i++)
  {
    cin>>c[i];
  }
  sort(c+1,c+n+1);  
  int k=0,ans=n;
  for(int i=1;i<=n;i++)
    cin>>c[i];
  sort(c+1,c+n+1);
  int i,`j;
  for( i=1;i<=n;i++)
  {
    for( j=1 ;c[j]<= 2*c[i] && j<=n; j++);
      k=n-j+i;
      if(ans>k)
      ans=k;
  }
  
  cout<<ans;

  return 0;
}