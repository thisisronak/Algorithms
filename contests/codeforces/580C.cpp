#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
#define MAX_N 100010


int n, m, arr[MAX_N], ans=0;
vector<int> graph[MAX_N];

void dfs(int v, int p, int cats) {
    if (arr[v]) cats++;
    else cats=0;
    if (cats>m) return ;
    if (graph[v].size()==1 && p!=-1) {
        ans++;
        return ;
    }
    for (auto u: graph[v]) {
        if (u!=p) {
            dfs(u,v,cats);
        }
    }
}

int main(void) {
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<n-1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0,-1,0);
    cout << ans << "\n";
    return 0;
}