#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
const int mod = 100000000;
int dp[105][105][2];

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  for(int i=0;i<=c;i++) dp[i][0][0]=1;
  for(int i=0;i<=d;i++) dp[0][i][1]=1;

  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
      for(int k=1;k<=i && k<=c;k++){
        dp[i][j][0] = (dp[i][j][0] + dp[i-k][j][1])%mod;
      }
      for(int k=1;k<=j && k<=d;k++){
        dp[i][j][1] = (dp[i][j][1] + dp[i][j-k][0])%mod;
      }
    }
  }

  cout<< (dp[a][b][0] + dp[a][b][1])%mod<<endl;
}

