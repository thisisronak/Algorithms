#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int n, tot, t;
const int N = 1010;
int f[N][N];

void dfs(int ss, int tt, int val, int star){
  f[ss][tt] = f[tt][ss] = -1;
  if (tt == star){
     t = val;
     return;
  }
  for (int i = 1; i <= n; ++i)
    if (f[tt][i] >= 0) dfs(tt, i, val + f[tt][i], star);
    else if (f[i][tt] >= 0) dfs(tt, i, val, star); 
}

int main(){
  scanf("%d",&n);
  memset(f, 0xff, sizeof(f));
  int st = -1;
  int sn = -1;
  tot = 0;
  for (int i = 0; i < n; ++i){
    int x, y, w;
    scanf("%d%d%d",&x, &y, &w);
    f[x][y] = w;
    tot += w;
    st = x;
    sn = y;
  }
  
  dfs(st, sn, f[st][sn], st);
  
  printf("%d\n",min(t, tot - t));
  return 0;
}
