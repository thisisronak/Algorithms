#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int main(){

    int n,k,i,a[100001];
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
      printf("%d %d ",2*i-1,2*i);
    for(i=k+1;i<=n;i++)
      printf("%d %d ",2*i,2*i-1);
}