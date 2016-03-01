#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,flag=0;
    cin>>p>>n;
    int a[n];
    set<int> s;
    set <int> :: iterator it;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        it = s.find(a[i]);
        if(it!=s.end() )
        {
            s.insert(a[i] % p);
        }
        else
        {
            flag = i+1;
            break;
        }
    }
    if(flag)
    cout<<flag<<endl;
    else
    cout<<"-1"<<endl;
}
