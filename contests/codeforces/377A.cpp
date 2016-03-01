#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int n, m, t, k;
char grid[510][510];
bool vis[510][510];

void dfs(int r, int c)
{
    if (r < 0 || r >= n) return;
    if (c < 0 || c >= m) return;
    if (grid[r][c] != '.' || vis[r][c]) return;
    
    vis[r][c] = true;
    dfs(r + 1, c);
    dfs(r - 1, c);
    dfs(r, c + 1);
    dfs(r, c - 1);
    
    if (k > 0) {
        --k;
        grid[r][c] = 'X';
    }
}

int main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0;j < m; ++j) {
            dfs(i, j);
        }
        printf("%s\n", grid[i]);
    }
}