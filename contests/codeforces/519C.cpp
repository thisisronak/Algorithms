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
  long long a, b;
  cin>>a>>b;

  if(a==b) cout<< (a+b)/3<<endl;
  else if( min(a,b)*2 < max(a,b) )
  {
    cout<<min(a,b)<<endl;
  } 
  else cout<<(a+b)/3<<endl;
}