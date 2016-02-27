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
  string s,t;
  cin>>s>>t;
  char a[150];
  for(int i=0;i<s.size();i++){
    if (s[i]==t[i]) a[i] = '0';
    else a[i] = '1';
  } 
  for(int i=0;i<s.size();i++)
  {
    cout<<a[i];
  }
  cout<<endl;
}