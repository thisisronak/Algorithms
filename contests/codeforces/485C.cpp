#include <bits/stdc++.h>
using namespace std;

#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
long long a[51];
// long long maxi(a, b)
// {
//   return (a>b)?a:b;
// }
int main()
{
  a[0] = 1;
  for(int i=1;i<51;i++)
  {
    a[i] = 2*a[i-1];
  }
  int n;long long x, y;
  while(n--)
  {
    
    if(x == y) {cout<<x<<endl; continue;}
    else{
    for(int i=1;i<51;i++)
    {
      if(y<a[i]-1)
      {
       // long long res=;
        cout<< max(x, a[i-1])<<endl;
      }
    }
    }
  }
} 