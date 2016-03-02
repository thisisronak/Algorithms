#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
const int maxn=5000001;
int f[maxn];
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    for(int i=2;i<maxn;++i) if (!f[i]) {
        f[i]=1;
        for(int j=i+i;j<maxn;j+=i)
            for(int k=j;k%i==0;k/=i) f[j]++;
    }
    for(int i=2;i<maxn;++i) f[i]+=f[i-1];

    int t; cin>>t;
    while (t--) {
        int a, b; cin>>a>>b;
        printf("%d\n",f[a]-f[b]);
    }
}