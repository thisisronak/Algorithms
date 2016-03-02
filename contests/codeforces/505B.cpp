#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif



int n,m,q;
int visited[100];
vector<int> adj[100][100];
//recursive
void dfs(int x, int c) {
    visited[x] = 1;
    for (int i=0;i<adj[x][c].size();i++) 
      if (!visited[adj[x][c][i]])
       dfs(adj[x][c][i],c);
}

int main() {
    scanf("%d%d",&n,&m);
    for (int i=0;i<m;i++) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        adj[a-1][c-1].push_back(b-1);
        adj[b-1][c-1].push_back(a-1);
    }
    scanf("%d",&q);
    for (int i=0;i<q;i++) {
        int u,v;
        scanf("%d%d",&u,&v);
        int ans = 0;
        for (int j=0;j<100;j++) {
            
            for (int k=0;k<n;k++) 
              visited[k] = 0;

            dfs(u-1,j);
            if (visited[v-1]) ans+=1;
        }
        printf("%d\n",ans);
    }

    return 0;
}