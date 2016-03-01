#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int n,m,a[150005],t=0x7fffffff;
int main()
{
  scanf("%d%d",&n,&m);
  for(int i=1;i<=n;i++)
    scanf("%d",&a[i]),
    a[i]+=a[i-1];
  for(int i=n-m;i+1;i--)
    if(a[i+m]-a[i]<t)
      t=a[i+m]-a[i],
      n=i;
  printf("%d",n+1);
}