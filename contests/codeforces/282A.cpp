#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  string s;
  int count=0;
  int n; cin>>n;
  while(n--)  
  {
    cin>>s;
    if(s[0]=='+'|| s[1]=='+')
    {
      count++;
    }
    else
      count--;
  }
  cout<<count<<endl;
}
