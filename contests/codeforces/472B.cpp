//template


#include <bits/stdc++.h>
using namespace std;

int main()
{
  //freopen("input.txt","r",stdin);
  int n,k,ret =0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  for(int i=n-1;i>=0;i-=k)
  {
    ret = ret + 2*(a[i]-1);
  }
  
  cout<<ret<<endl;

}