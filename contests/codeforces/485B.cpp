#include <bits/stdc++.h>
using namespace std;

#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
    long long mix,miy,mx,my,x,y,n;
    cin>>n;
    cin>>mx>>my;
    mix=mx;
    miy=my;
    for(int i=1;i<n;++i)
    {
        cin>>x>>y;
        mix=min(mix,x);
        miy=min(miy,y);
        mx=max(mx,x);
        my=max(my,y);
    }
    cout<<max((mx-mix)*(mx-mix),(my-miy)*(my-miy));
}