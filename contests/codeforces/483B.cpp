#include <bits/stdc++.h>
using namespace std;

#ifdef CORLEONE
  #define d(b) cout<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  long long l =1, r= 1000000000000,m;
  while(l<r)
  {
     m = (l+ (r-l)/2);
    //m = (l+r)/2;
    if(a <= m-(m/c) && b <= m-(m/d) && a+b <= m-(m/(c*d)))
    {
       r = m;
       //d(m);
    }
    else
      l = m+1;
  }
  cout<<r<<endl;
  

}