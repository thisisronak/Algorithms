#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

char c[102][102];
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<102;i++){
    for(int j=0;j<102;j++){
      c[i][j] = '.';
    }
  }

  string s;
  for(int i=1;i<=n;i++){
    cin>>s;
    for(int j=1;j<=s.size();j++){
      if(s[j-1]=='#') {
        c[i][j]='#';
        // cout<<"done "<<endl;
      }
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(c[i][j] == '#'){
        if(c[i+1][j] =='#' && c[i+2][j]=='#' && c[i+1][j-1]=='#' && c[i+1][j+1]=='#')
          {c[i+1][j] ='.';c[i+2][j]='.';  c[i+1][j-1]='.'; c[i+1][j+1]='.'; c[i][j]='.';}
    }
  }
}
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(c[i][j] == '#'){
        cout<<"NO"<<endl;
        return 0;
      }
    }
  }
 cout<<"YES"<<endl;
 } 
