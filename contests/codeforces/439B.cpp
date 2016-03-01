#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  //freopen("input.txt","r",stdin);
  int n, x;

  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort (a, a+n);
  long long sum =0;

  for(int i=0;i<n;i++)
  {
    sum = sum + 1LL*x*a[i];
    x = max(x-1,1);
  }

  cout<< sum << endl;

}