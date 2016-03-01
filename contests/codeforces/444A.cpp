#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  int a[5],temp=0;
  int sum =0;
  for(int i=0;i<5;i++)
  {
    cin>>temp;
    sum = sum + temp;
  }  
  if(sum<5){
    cout<<"-1"<<endl;
  }
  else if(sum%5==0)cout<<sum/5<<endl;
  else cout<<"-1"<<endl;
}
