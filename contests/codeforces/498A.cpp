#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
// #define int long long/

 int main()
{
long long a,b,x,y;
 cin>>a>>b>>x>>y;
 long long p,q,r;
 long long n;
 cin>>n;
 long long count=0;
 for(int i=0;i<n;i++)
 {
    cin>>p>>q>>r;
   // a[i].p=p;a[i].q=q;a[i].r=r;
    long long tema= p*x+q*y+r;
    long long temb= p*a+q*b+r;
    if( (tema>0 && temb<0)|| (tema<0 && temb>0))
    {
      count++; 
    }
    // else count++;

 } 
 cout<<count<<endl;
}