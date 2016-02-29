#include<bits/stdc++.h>
using namespace std;
 long long a[300009];
int main()
{

  int n;
  cin>>n;

  for(int i=1;i<=n;i++) cin>>a[i];
  long long sum =0;
  sort(a+1,a+n+1);

 // for(int i=1;i<=n;i++) cout<<a[i]<<endl;
  for(int i=1;i<=n;i++)
  {
    sum = sum + abs(i-a[i]);
  }
  cout<<sum<<endl;
}
