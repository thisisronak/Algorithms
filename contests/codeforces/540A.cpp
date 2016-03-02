#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+min(abs(s[i]-t[i]),10-abs(s[i]-t[i]));
    }
    cout<<ans;

}
