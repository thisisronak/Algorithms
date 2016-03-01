#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
      cin>>a[i];
    sort(a,a+m);
    int minim=99999999;
    for(int i=0;i<m-n+1;i++)
      minim=min(minim,a[i+n-1]-a[i]);
    cout<<minim<<endl;
}