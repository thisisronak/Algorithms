#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

char a[102][102];
int main()
{
  int n ,k;
  cin>>n>>k; 
  for(int i=0;i<102;i++){
    for(int j=0;j<102;j++){
      a[i][j]='S';
    }
  }
  int count =0;  
  
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(count==k) break;
        if(a[i-1][j]=='S' && a[i+1][j]=='S'&& a[i][j-1]=='S'&& a[i][j+1]=='S' && count!=k) {
          a[i][j]='L';
          count++;
        }
      }
      if(count==k) break;
    }
    if(count<k) {
      cout<<"NO"<<endl;
      return 0;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cout<<a[i][j];
      }
      cout<<endl;
    }

  }
