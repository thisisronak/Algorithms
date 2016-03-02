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
  int n;
  cin>>n;
  string s;
  cin>>s;
  int a=0, b=0;
  // int n = s.size();
  for(int i=0;i<n;i++){
    if((s[i]-'0')==1) a++;
    else b++;
  } 
  // cout<<a<<" "<<b;
  cout<<n-(2*min(b,a))<<endl;
}