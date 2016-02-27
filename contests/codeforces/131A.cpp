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
  string s;
  cin>>s;
  int count = 0;
  for(int i=0;i<s.size();i++){
    if(s[i]-'A'>=0) count++;
  } 
  if(count==s.size) 
}