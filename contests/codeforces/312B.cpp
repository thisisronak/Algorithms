#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


long double a,b,c,d;
int main () 
{
  cin>>a>>b>>c>>d;
  cout<<a*d/(a*d+b*c-a*c)<<endl;
  return 0;
}