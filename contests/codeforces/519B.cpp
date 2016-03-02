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
  long long n;
  cin>>n;

  long long a[n];
  long long b[n-1];
  long long c[n-2];
  for(long long i=0;i<n;i++)
  {
    cin>>a[i];
  }  
  for(long long i=0;i<(n-1);i++)
  {
    cin>>b[i];
  }
  for(long long i=0;i<(n-2);i++)
  {
    cin>>c[i];
  }
  sort(a,a+n);
  sort(b,b+n-1);
  sort(c,c+n-2);
  int flagA=0,flagB=0;
  for(long long i=0;i<n-1;i++)
  {
    if(a[i]!=b[i]) {cout<<a[i]<<endl;flagA=1;break;}
  }
  if(flagA==0)
  {
    cout<<a[n-1]<<endl;
  }

 for(long long i=0;i<n-1;i++)
  {
    if(b[i]!=c[i]) {cout<<b[i]<<endl;flagB=1;break;}
  }
  if(flagB==0)
  {
    cout<<b[n-1]<<endl;
  }
}