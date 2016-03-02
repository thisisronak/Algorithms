#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
 int a[1002][1002];
int main()
{
  int n, m,k;
  cin>>n>>m>>k;
 
  for(int i=1;i<=k;i++)
  {
    int x, y;
    cin>>x>>y;
    a[x][y]=1;
    if( a[x][y+1]==1 && a[x+1][y]==1 && a[x+1][y+1]==1) {cout<<i<<endl;return 0;}

    else if(a[x][y+1]==1 && a[x-1][y]==1 && a[x-1][y+1]==1){cout<<i<<endl;return 0;}

    else if( a[x][y-1]==1 && a[x+1][y]==1 && a[x+1][y-1]==1 ){cout<<i<<endl;return 0;}

    else if( a[x][y-1]==1 && a[x-1][y]==1 && a[x-1][y-1]==1){cout<<i<<endl;return 0;}
  }
  cout<<"0"<<endl; return 0;
}