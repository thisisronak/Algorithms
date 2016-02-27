#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  int c=0,s=0,i,a,b,n;
  cin>>n;
  while (n--)
{
  cin>>a>>b;s+=b-a;if (s>c) c=s;}
  cout<<c;
  return 0;
}
