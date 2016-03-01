#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

using namespace std;
int main(){
  int n,m,x,k,a[2]={0};
  scanf("%d%d%d",&n,&m,&k);
  while(n--){
    scanf("%d",&x);
    a[x-1]++;
  }
  printf("%d\n",max(0,max(a[0]-m,a[0]+a[1]-m-k)));
  return 0;
}