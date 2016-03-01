#include<bits/stdc++.h>
using namespace std;
#define MAX 3005

int main()
{
    int n,m,a[MAX],i;
    cin>>n>>m;
    for(i=1;i<=m;++i)
        cin>>a[i];
    sort(a+1,a+m+1);
    if(a[1]==1 || a[m]==n)
    {
         puts("NO");
         return 0;
    }

    for(i=1;i+2<=m;++i)

    if(a[i]==a[i+1]-1 && a[i]==a[i+2]-2)
    {
        puts("NO");
        return 0;
    }
    cout<<"YES"<<endl;
}
