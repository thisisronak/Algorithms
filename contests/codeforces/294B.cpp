#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int n,a,b,ans=99999;
int bir,iki;
int d[4][109];

int main()
{
  scanf("%d",&n);
  
  for(int h=0; h<n; h++)
  {
    scanf("%d %d",&a,&b);
    
    if(a == 1)
      d[1][bir++] = b;
    else
      d[2][iki++] = b;
  }
  
  sort(d[1] , d[1]+bir);
  sort(d[2] , d[2]+iki);
  
  for(int h=0; h<=bir; h++)
    for(int j=0; j<=iki; j++)
    {
      int s = 0;
      
      for(int i=0; i<bir-h; i++)
        s += d[1][i];
      
      for(int i=0; i<iki-j; i++)
        s += d[2][i];
      
      if(h+(2*j) >= s  &&  ans > h+(2*j))
        ans = h+(2*j);
    }
  
  printf("%d\n",ans);
}