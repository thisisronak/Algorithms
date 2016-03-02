#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

long long a[1000005];

int main()
{
  int n,temp, flag, proxy;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>temp;
    a[temp]++;
  }

  for(int i=1000000;i>=1;i--)
  {
    if( (a[i]%2 != 0) ) {a[i]--; a[i-1]++;}
    // else if( (a[i]%2 != 0) && (a[i-1]==0) ){ a[i]--; }
  }
  // for(int i=1000000;i>=1;i--)
  // {
  //   if(a[i]>0) cout<<i<<":"<<a[i]<<" ";
  // }

  for(int i=1000000;i>=1;i--)
  {
    if( a[i] > 4 ){
      if(a[i]%4==0) sum+= (a[i]*a[i]);
      else (a[])
    }
  }
}