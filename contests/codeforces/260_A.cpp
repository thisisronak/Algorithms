#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>mp;
    vector< pair<int,int> > p;
    int n,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d %d",&mp.first,&mp.second);
    p.push_back(mp);
}
    sort(p.begin(),p.end());
    mp=p[0];
for(int i=0;i<n;i++)
{
        if(p[i].first>mp.first && p[i].second<=mp.second){ flag=1;}
        mp=p[i];
}
printf("%s\n",(flag==1)?"Happy Alex":"Poor Alex");
return 0;
}
