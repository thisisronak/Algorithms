#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl


int main()
{
    int n; cin>>n;
    pair<int,int>a[n];
    for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
    int t=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(a[i].first>=a[i].second&&a[i].second>=t) t=a[i].second;
        else t=a[i].first;
    cout<<t;
}