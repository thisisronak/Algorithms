#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  int n,m;
  cin>>n>>m;
  int a[n+5];
  int b[m+5];
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  } 
  for(int i=1;i<=m;i++)
  {
    cin>>b[i];
  }
  long long sum =0;
  for(int i=1;i<=m-1;i++)
  {
    if(b[i]==b[i+1]) {i++;continue;}

    else {sum =sum+ a[b[i]]+a[b[i]]+a[b[i+1]];i++;continue;}
  

  }
  cout<<sum<<endl;
}