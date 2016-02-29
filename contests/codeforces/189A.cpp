#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
const int INF = 3972017;
int f[5000];
int n,a,b,c,i;
int main()
{
    cin>>n>>a>>b>>c;
    for (i=1;i<=n;i++)f[i]=-INF;
    for (i=1;i<=n;i++){
        if (i>=a && f[i-a]+1>f[i])f[i]=f[i-a]+1;
        if (i>=b && f[i-b]+1>f[i])f[i]=f[i-b]+1;
        if (i>=c && f[i-c]+1>f[i])f[i]=f[i-c]+1;
    }
    cout<<f[n];
    return 0;
}