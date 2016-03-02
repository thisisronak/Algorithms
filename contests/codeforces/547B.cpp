#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int a[505][505];
int main()
{
  int n,m ,q;
  scanf("%d%d%d",&n,&m,&q);

  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  // cout<<"here"<<endl;
  int maxim=0;
  int b[505];
  b[0] = 0;

  for(int i=1;i<=n;i++){
      int count =0,maxim =0;
      for(int j=1;j<=m;j++)
      {
          if(a[i][j]==0) count=0;
          else {
            count++;
          }
            maxim = max(maxim, count);        

      }
      b[i] = maxim;
    }

   // for(int i=1;i<=n;i++){
   //  cout<<b[i]<<endl;
   // }
  
  while(q--){
    int x, y;
    scanf("%d%d",&x,&y);
    if(a[x][y])a[x][y]=0;
    else {
      a[x][y] = 1;
      // cout<<"here"<<endl;
    }
    int count =0;
    maxim =0;
    for(int j=1;j<=m;j++)
      {
          if(a[x][j]==0) count=0;
          else {
            count++;
          }
            maxim = max(maxim, count);      
      }
      b[x] = maxim;
      // cout<<b[x]<<endl;
      int res =b[1];
      for(int i=1;i<=n;i++){
        if(b[i]>res) {
          res = b[i];
        }
      }
      printf("%d\n",res);
  }
}

