#include <bits/stdc++.h>
using namespace std;
int parent[100];
int r[100];

/* if size of the largest disjoint set required-- Gives in O(1) time
void unionSet(int a , int b){
  int x = findSet(a);
  int y = findSet(b);
  if(x == y) return;
  if( r[x] >= r[y] ) {
    parent[y] = x;
    if( r[x]==r[y]) r[x]++;   
    size[x] += size[y];
    maxConnected = max(maxConnected, size[x]);
  }
  else{
    parent[x]=y;
    size[y] += size[x]; 
    maxConnected = max(maxConnected, size[y]);
  }
}
*/


int findSet(int);

void unionSet( int a , int b){
  int x = findSet(a);
  int y = findSet(b);
  if(x == y) return ;
  if( r[x] >= r[y] ) {
    parent[y] = x;
    if( r[x]==r[y]) r[x]++;
  }
  else{
    parent[x]=y;
    // if( r[y]==r[x]) r[y]++;
  }
}

int findSet(int x)
{
  if(x!=parent[x])parent[x] = findSet(parent[x]);
  return parent[x];
}

int main()
{
  int n,m;
  cin>>n>>m;

  for(int i=0;i<100;i++) parent[i]  = i;
  
  for 

  for(int i=0;i<n;i++)
  {
    int a, b;
    cin>>a>>b;
    unionSet(a, b);
    
  } 
  cout<<findSet(1)<<" "<<findSet(2)<<endl;
}