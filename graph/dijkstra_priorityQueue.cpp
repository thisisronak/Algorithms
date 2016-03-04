/*dijkstra*/
#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define ALL(p) p.begin(),p.end()
#define INF 2147483647
#define pb(x) push_back(x)
#define pii pair< int , int >
#define MAX 100010

vector < pii > G[MAX];
int d[MAX], f[MAX];

int process (int n, int e)
{
  int start, end;
  int u,v ,w,we,wn,size;
  for(int i=0;i<n+1;i++) /*Initialize Graph to 0*/
  {
    G[i].clear();
    d[i] = INF;   /* d is array of best estimates of cost*/
    f[i] = 0;   /* f is array of (previous) predeseccors of the vertex*/
  }
  // return 1;

  for(int i=0;i<e;i++)
  {
    scanf("%d %d %d", &u,&v, &w);
    G[u].pb(make_pair(w,v));
    G[v].pb(make_pair(w,u));
  }
  // return 1;
  cin>>start>>end;
  d[start]= 0; //trivial case : the distance from source to source 
  priority_queue < pii , vector < pii > , greater < pii > > Q;
  // template <object_type, container_type, comparator_function>
  Q.push(pii(0, start));

  // return 1;
  while(!Q.empty())
  {
    u = Q.top().second;
    wn = Q.top().first;
    Q.pop();
    size = G[u].size();
    for(int i=0;i<size;i++)
    {
      v = G[u][i].second;
      we = G[u][i].first;
      if(!f[v] && wn+we<=d[v])
      {
        d[v]=wn+we;
        Q.push(pii(d[v],v));

      }
    }
    f[u]= 1;
    if(u==end) break;
  }
  return d[end];
}

int main() {
  int t, n, e, dist;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &n, &e);
    dist = process(n, e);
    if(dist==INF) printf("NO\n");
    else printf("%d\n", dist);
  }
  return 0;
}
