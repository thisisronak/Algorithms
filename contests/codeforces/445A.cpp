#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main(){
  char a[105][105];
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
      if(a[i][j]=='.'){
        a[i][j]=((i+j)%2?'B':'W');
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<a[i][j];
    }
    cout<<endl;
  }
  return 0;
}