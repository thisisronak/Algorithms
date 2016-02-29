#include<bits/stdc++.h>
using namespace std;

int main()
{
  // freopen("input.txt","r",stdin);
  int n;
  cin>>n;
  int a[n],sum=0,flag;
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
      sum = sum + a[i];
    }
    if(sum%n==0) flag =n;
    else flag =0;

  cout<<max( flag, n-1)<<endl;


}