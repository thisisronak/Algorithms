#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
 long long int i,f=1,s,n,m,ans=0;
 cin>>n>>m;
 for (i=0;i<m;i++)
 {
  cin>>s;
  if (f<=s) ans+=(s-f);
  else ans+=(n-f+s);
  f=s;
 }
 cout<<ans;
}