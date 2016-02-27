#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  string s, t;
  cin>>s>>t;
  reverse(t.begin(),t.end());
  if (s==t) cout<<"YES"<<endl;
  else cout<<"NO"<<endl; 
}