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
  int i=0;
  bool flag=true;
  string s;
  cin>>s;
  // i=0;
  while(s[i]) {
    int count=1;
    while(s[i+1]==s[i])
     {
      count++;
      i++;
    }
    if(flag && count>=2)
     {
      cout<<s[i]<<s[i];
      flag=false;
    }
    else
     {
      cout<<s[i];
      flag=true;
    }
    i++;
  }
  cout<<endl;
  return 0;
}