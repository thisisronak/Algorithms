#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int max(int a,int b){return a>b?a:b;}
int main()
{
  int n;
  long long d;
  cin>>n;
  cin>>d;

  long long a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  double maxd=-1;
  maxd = max(maxd, 2*a[0]);
  maxd = max(maxd,2*(d-a[n-1]));
  for(int i=0;i<n-1;i++)
  {
    maxd = max(maxd, a[i+1]-a[i]);
  }
 /* if(a[0]!=0)
    {
      
      if(maxd<(a[0]-0)) maxd = (a[0]-0);
    }
  if(a[n-1]!=d)
  {
    
     if(maxd<(n-a[n-1])) maxd = (n-a[n-1]);
  }*/
  cout<<fixed<< setprecision(10)<<  maxd/2.0<<endl;
  return 0;
}