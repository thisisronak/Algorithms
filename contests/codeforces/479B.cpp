#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  int test;
  cin>>test;
  while(test--)
  {
    long long n;
    cin>>n;
    long long res = n+ (n*(n+1))/2;
    cout<<res<<endl;
  } 
}
