bool bfs(int s)
{
	int i, u, v, sz;
	queue< int > Q;
	Q.push(s);
	flag[s] = 1;
	while(!Q.empty())
	{
		u = Q.front();
		Q.pop();
		sz = G[u].size();
		for(i=0; i<sz; i++)
		{
			v = G[u][i];
			if(pre[u] != v && flag[v]) return false;
			else if(!flag[v])
			{
				pre[v] = u;
				flag[v] = 1;
				Q.push(v);
			}
		}
	}
	for(i=1; i<=N; i++)
		if(!flag[i])
			return false;
	return true;
}
