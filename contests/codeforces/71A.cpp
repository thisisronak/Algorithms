
#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
   freopen("input.txt","r",stdin);
   int test;
   cin>>test;
   cout<<test;
   while(test--)
   {
    string s;
  cin>>s;
  int l = s.length();
  if(l>10)    
  cout<<s[0]<<l-2<<s[l-1]<<endl;
  else 
  cout<<s<<endl; 
   }
  return 0;
}