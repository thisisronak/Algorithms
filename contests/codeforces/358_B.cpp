#include<bits/stdc++.h>
using namespace std;
map <int , int > hash;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],dp[n];
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hash[a[i]] = 1;
        dp[i] = hash.size();
       // h[a[i] = 1;
    }

    for(int i=0;i<m;i++)
    {
        cin>>temp;
        cout<<dp[temp-1]<<endl;
    }

}
