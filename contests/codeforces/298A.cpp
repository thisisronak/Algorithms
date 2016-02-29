#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  string s;
  int count=0;
  int st=0, t=0;
  cin>>s;
  for(int i=0;i<s.size();i++ )
  {
    if(s[i]=='R') {
      r++;
      // s.push_back(i+1);
    }
    else if(s[i]=='L') l++;
  }
  if(r>=l)
    for(int i=0;i<s.size();i++){
      if(s[i]=='R') {st = i+1; break;}
    }
  else
  {
    for(int i=0;i<s.size();i++){
      if(s[i]=='L' && count==r)
      {
        s = i+1;

      }
        
    }
  }


}