#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main(){
  int i,d,s,m,tmp;

  scanf("%d%d",&m,&s);

  if(!s && m == 1){
    printf("0 0\n");
    return 0;
  }

  if(!s || s > 9*m){
    printf("-1 -1\n");
    return 0;
  }

  tmp = s;
  for(i = 0; i < m; ++i){
    for(d = !(i); d < 10; ++d){
      if(s-d <= (9*(m-i-1))) break;
    }
    printf("%d",d);
    s -= d;
  }

  printf(" ");

  s = tmp;
  while(m--){
    d = min(9,s);
    printf("%d",d);
    s -= d;
  }
  printf("\n");

  return 0;
}