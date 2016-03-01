#include<bits/stdc++.h>
using namespace std;

string s;
int dp[100010];
int m;

int main() {
  
  cin >> s;
  cin >> m;
  for(int i = 0; i < s.size() - 1; i++) {
    if(s[i] == s[i + 1]) {
      dp[i + 1] = dp[i] + 1;
    }
    else {
      dp[i + 1] = dp[i];
    }
  }

  cout << endl;
  for(int i = 0; i < m; i++) {
    int l, r;
    cin >> l >> r;
    --l, --r;
    cout << dp[r] - dp[l] << endl;
  }
}