#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int dp[200005];
int main()
{
  string s;
  cin>>s;
  int l = s.length();
  int m;
  cin>>m;
  string t="0"+s;
  s = "0" + s;
  dp[0]=0;
  for(int i=1;i<=m;i++)
  {
    int a;
    cin>>a;
    dp[a]++;
    dp[l-a+2]--;
  }
  for(int i=1;i<=l;i++)
  {
    dp[i] +=dp[i-1];
    if(dp[i]%2==0)
    {
      t[i] = s[i];
    }
    else
    {
      t[i] = s[l-i+1];
    }
  }
  for(int i=1;i<=l;i++) cout<<t[i];
    cout<<endl;
}