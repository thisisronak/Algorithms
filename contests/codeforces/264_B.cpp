#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    long long count=0,e=0;

    for(int i=1;i<n;i++)
    {
        e = e+ a[i-1] -a[i];
        if(e<0)
        {
            count = count + abs(e);
            cout<<count<<endl;
            e =0;
        }
    }
    cout<<count<<endl;

}
