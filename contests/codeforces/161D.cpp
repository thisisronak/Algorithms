#include <vector>
#include <iostream>
using namespace std;

#define LL long long

LL res;
int n, k, a, b;
vector<int> adj[50001];
int vet[50001][510];

void dfs(int p, int l)
{
  vet[p][0]++;
  for (int i = 0; i < adj[p].size(); ++i)
  {
    int v = adj[p][i];
    if (v == l) continue;
    dfs(v, p);
    for (int j = 0; j < k; ++j)
      res += (LL)vet[p][j]*vet[v][k-j-1];
    for (int j = 0; j < k; ++j)
      vet[p][j+1] += vet[v][j];
  }
}

int main()
{
  cin >> n >> k;
  
  for (int i = 0; i < n-1; ++i)
  {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  dfs(1, -1);
  
  cout << res << endl;
  
  return 0;
}