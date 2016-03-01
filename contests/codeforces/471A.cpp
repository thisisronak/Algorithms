#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  //freopen("input.txt","r",stdin);
  string str="qwertyuiopasdfghjkl;zxcvbnm,./";
  string s;
  char flag;
  cin>>flag>>s;
  int sz=s.size(), v=((flag=='R')?-1:1);
  for(int i=0;i<sz;i++)
    {
      cout<<str[str.find(s[i])+v];
    }
    return 0;
} 
