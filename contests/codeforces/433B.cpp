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
  int n,q,t,l,r;
  long long int a[100010],b[100010],c[100010];
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    b[i+1] = a[i] + b[i];
  }
  sort(a,a+n);
  for(int i=0; i<n; i++)
    c[i+1] = a[i] + c[i];
  cin>>q;
  while(q--)
  {
    cin>>t>>l>>r;
    if(t==1)
      cout<<b[r]-b[l-1]<<endl;
    else
      cout<<c[r]-c[l-1]<<endl;
  }
  return 0;
}