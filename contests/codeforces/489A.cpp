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
  int n, count=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];

  for(int i=0;i<n;i++)
  {
    int min = 99999,j;
    for( j=i+1;j<n;j++)
    {
        if(a[j]<min) min = a[j];
    }
    if( a[i] > a[j] )
    {
      cout<<i<< " "<<j<<endl;
      swap(a[i],a[j]);
      
      count++;
    }
  }
  cout<<count<<endl;
}