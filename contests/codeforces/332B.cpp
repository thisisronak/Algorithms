#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

__int64 a[200001],s[200001],M,R;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i;
    s[1]=0;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=k;i++)
        s[1]+=a[i];
    int b,x,bb;
    for(i=k+1;i<=n;i++)
      s[i-k+1]=s[i-k]-a[i-k]+a[i];
    for(i=n-2*k+1;i>=1;i--){
        if(M<=s[i+k])M=s[i+k],b=i+k;
        if(R<=M+s[i])R=M+s[i],x=i,bb=b;
    }
    printf("%d %d\n",x,bb);
    return 0;
}