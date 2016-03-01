#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

#define INF 0x7fffffff
using namespace std;

int main()
{
    int a[5000];
    int n,m,k,i,j,x,y,cnt=0;

    int ans=INF,sum=0,fi=0;

    cin>>n>>k;
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=1; i<=1000; i++)
    {
        for(j=0,sum=0,cnt=0; j<n; j++)
        {
            if((i+j*k)!=a[j])
                sum++;
        }
        if(sum<ans) ans=sum,fi=i;
    }

    cout<<ans<<endl;

    for(i=0;i<n;i++)
    {
        if(a[i]>fi+i*k) cout<<"- "<<i+1<<" "<<a[i]-(fi+i*k)<<endl;
        else if(a[i]<fi+i*k) cout<<"+ "<<i+1<<" "<<fi+i*k-a[i]<<endl;
    }

    return 0;
}