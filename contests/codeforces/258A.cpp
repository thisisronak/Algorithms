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
  bool flag = false;
  int ind ;
  for(int i=0;i<s.size();i++){
    if( (s[i]-'0')==0) {
      ind = i;
      
      flag = true;break;
    }
  } 
  if (!flag) ind = s.size()-1;

  for(int i=0;i<ind;i++){
    cout<<s[i];
  }
  for(int i=ind+1;i<s.size();i++)
  {
    cout<<s[i];
  }

}