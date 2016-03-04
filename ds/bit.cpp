#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

const int MAX = 10005;
int v[MAX], n[MAX], z[MAX];

int lb (int i)
{
  return (i & -i);
}

int get(int *tree, int idx)
{
  int s =0;
  for(int i= idx; i;i-=lb(i)) 
    s+=tree[i];
  return s;
}

void update (int *tree, int idx; int val)
{
  for(int i=idx; i<M;i+=lb(i)) tree[i]+= val;
}

