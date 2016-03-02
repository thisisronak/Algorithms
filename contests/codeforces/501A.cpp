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
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  long long r, s;
  r = max( (3*a)/10,  a- ((a/250)*c) );
  s = max( (3*b)/10,  b- ((b/250)*d) );
  if(r>s) cout<<"Misha"<<endl;
  else if(s>r)cout<<"Vasya"<<endl;
  else cout<<"Tie"<<endl;

}