#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int dp[1010];
char a[1010][1010];
int main()
  {
    int n,m,ans=1;
    cin>>n>>m;
    dp[0]=1;
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);

    }   
    // for(int i=0;i<n;i++){
    //     puts(a[i]);

    // }   
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(strcmp(a[i],a[i-1])>0){
                dp[i]=max(dp[i],dp[j]+1);
                ans=max(ans,dp[i]);
            }
        }
    }
    cout<<n-ans;
    return 0;
}
