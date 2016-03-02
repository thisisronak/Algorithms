#include <bits/stdc++.h>
#define pb push_back
#define sqr(x) (x)*(x)
#define sz(a) int(a.size())
#define reset(a,b) memset(a,b,sizeof(a))
#define oo 1000000007

using namespace std;

typedef pair<int,int> pii;
typedef long long ll;
const int big=30005;
map<int,int> foo[big];
int c[big];

int main()
{

    int n,d;
    cin>>n>>d;
    for(int i=0,v; i<n; ++i){
        cin>>v;
        ++c[v];
    }
    foo[d][d]=c[d];
    int res=0;
    for(int i=d; i<=30000; ++i)
    {
        for(map<int,int>::iterator it=foo[i].begin(); it!=foo[i].end(); ++it)
        {
            res=max(res,it->second);
            for(int x=it->first-1; x<=it->first+1; ++x) if(x>0 && i+x<=30000){
                int v=foo[i+x][x];
                if(v<it->second+c[i+x])
                    foo[i+x][x]=it->second+c[i+x];
            }
        }
    }
    cout<<res<<endl;
}

