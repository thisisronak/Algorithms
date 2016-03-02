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
  string s;
  cin>>s;
  if(s[0]-'0'!=9 && s[0]-'0'>4)
  {
    s[0] = 9-(s[0]-'0') +'0';
  }
  for(int i=1;i<s.size();i++)
  {
    if(s[i]-'0'>4) s[i] = 9-(s[i]-'0') +'0';
  } 
  cout<<s<<endl;

}