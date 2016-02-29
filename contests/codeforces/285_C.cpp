#include <bits/std`c++.h>
using namespace std;
int temp[300005];
int main()
{
  freopen("input.txt","r",stdin);
  int n,j=0;
  cin>>n;
  long long a[n];
  long long b[n];
  long long sum =0;
  for(int i=1;i<=n;i++)temp[i]=1;
  for(int i=0;i<n;i++) 
  {
    cin>>a[i];
    if(a[i]<=0 && a[i]>n)
    {
      b[j]= a[i];
      j++;
    }
    else
    {
      temp[i+1] = 0;
    }

  }
  j--;
  sort(b,b+j);
  int k=0;
  for(int i=1;i<=n;i++)
  {
    if(temp[i])
    {
      sum = sum + abs(i-b[k]);
      k++;
    }
  }
  cout<<sum<<endl;
}