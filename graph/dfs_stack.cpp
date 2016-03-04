#include <cstdio>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

int N, E;
vector< int > G[MAX];
bool flag[MAX];
int pre[MAX];

bool dfs(int s)
{
	int i, u, v, sz;
	stack< int > stk;
	stk.push(s);
	flag[s] = 1;
	while(!stk.empty())
	{
		u = stk.top();
		stk.pop();
		sz = G[u].size();
		for(i=0; i<sz; i++)
		{
			v = G[u][i];
			if(pre[u] != v && flag[v]) return false;
			else if(!flag[v])
			{
				pre[v] = u;
				flag[v] = 1;
				stk.push(v);
			}
		}
	}
	for(i=1; i<=N; i++)
		if(!flag[i])
			return false;
	return true;
}

int main()
{
	int i, u, v, s;
	scanf("%d %d", &N, &E);
	for(i=0; i<E; i++)
	{
		scanf("%d %d", &u, &v); 
		//scanning two nodes which are the edges in the graph G
		s = u;
		G[u].push_back(v);
		
		G[v].push_back(u);
	}
	if(E!=N-1) //checking for the basic condition of a graph
		printf("NO\n");
	else
	{
		if(dfs(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
