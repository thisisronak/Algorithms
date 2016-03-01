#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define MAX 2000000008
int main()
{
    ll x,y,n;
    cin>>x>>y;
    cin>>n;
    ll a[9999],ans=0,temp=0,flag=0;
    /*ll ex[100];
    ex[0]=x;
    ex[1]=y;
    ll flag;
    for(ll j=2;j<100;j++)
        ex[j] = -1234;*/
    set <int> s;
     std::set<int>::iterator it;

    s.insert(x);
    s.insert(y);
    a[0]=x;
    a[1]=y;
    for(ll i=2;i<=999;i++)
    {
        a[i]=(a[i-1]-a[i-2]) % mod;
       // cout<<a[i]<<endl;

        it = s.find(a[i]);
            if(it!=s.end()){
                temp = i;
                flag = n%temp;
               //cout<<flag<<endl;
                ans=a[flag+1];
                break;
            }
        else s.insert(a[i]);
    }
    /*if(!temp)
    {
        if(a[n-1]>=0)cout<<a[n-1]<<endl;
        else cout<<1000000007+ans<<endl;
    }*/
   if( ans>=0)
    cout<<ans<<endl;
    else
    cout<<1000000007+ans<<endl;
    return 0;
}
