#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl
int a[25];
int main()
{
  freopen("input.txt","r",stdin);
  long long sum=0,i,arr[25]={0},n,t;
  cin>>n;
  while(n--)
    { 
      cin>>t; 
      arr[t+10]++;
     }
  for(i=0;i<10;i++)
    sum+=arr[i]*arr[20-i];
  sum+=(arr[10]*(arr[10]-1))/2;
 cout<<sum;
  return 0;
}