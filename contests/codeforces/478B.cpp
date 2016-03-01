#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  long long m,n,diff=0,min=0;
  cin>>n>>m;
  if(m==n) cout<<"0 0"<<endl;
  else
  {
     diff = n-m;
    diff = (diff * (diff+1))/2;
    min = n/m;
    long long res = (m*(min*(min-1))/2) + min*(n%m);


    cout<< res<<" "<<diff<<endl;
  }  
}
