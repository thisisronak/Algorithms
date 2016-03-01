#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  int n,x,m=0,v,t=0;
scanf("%d %d",&n,&v);
for(int i=0;i<n;i++){
    scanf("%d",&x);
    if(x>m) m=x;
    t+=x;
}
if(t-m<=v) printf("YES\n");
else printf("NO\n");
return 0;

}