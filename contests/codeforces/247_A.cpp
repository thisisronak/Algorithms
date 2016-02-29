#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    long long cost =0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            cost = cost + a;
        }
        else if(s[i]=='2')
        {
            cost = cost + b;
        }
        else if(s[i]=='3')
        {
            cost = cost + c;
        }
        else
        {
            cost = cost +d;
        }
    }
    cout<<cost<<endl;

}
