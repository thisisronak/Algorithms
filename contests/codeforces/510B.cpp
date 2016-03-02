#define N 1<<6
#include <bits/stdc++.h>
using namespace std;

bool vis[N][N];
char a[N][N];
int res,n,m;

void dfs(int lx,int ly,int x,int y,char col)
{
  if(x<0 || x>=n || y<0 || y>=m || (col && a[x][y]!=col)) return;
  if(vis[x][y])
  {
    res=1;
    return;
  }

  vis[x][y]=1;
  if(x-1!=lx || y!=ly) dfs(x,y,x-1,y,a[x][y]);
  if(x+1!=lx || y!=ly) dfs(x,y,x+1,y,a[x][y]);
  if(x!=lx || y-1!=ly) dfs(x,y,x,y-1,a[x][y]);
  if(x!=lx || y+1!=ly) dfs(x,y,x,y+1,a[x][y]);
}

int main()
{
  cin>>n>>m;
  for(int i=0;i<n;i++)
    scanf("%s",a[i]);
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      if(!vis[i][j]) dfs(-1,-1,i,j,0);
  puts(res?"Yes":"No");
  return 0;
}