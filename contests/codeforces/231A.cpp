#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int main()
{
  
 int a,b,c,d,e=0;
 cin>>a;
 while(a--)
 {
  cin>>b>>c>>d;
  if(b+c+d>1)e++;

 }
 cout<<e;
 return 0;
}