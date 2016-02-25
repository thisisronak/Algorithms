#include <bits/stdc++.h>
using namespace std;

#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

#define N 20
#define MAX (1+(1<<6)) 
#define inf 0x7fffffff
int arr[N];
int tree[MAX];

void build_tree ( int node, int a, int b)
{
  if(a>b) return ;
  if(a==b) {
    tree[node] = arr[a];
    return ;
  }
  build_tree(node*2, a , (a+b)/2);
  build_tree(node*2+1, 1+(a+b)/2, b);

  tree[node] = max( tree[node*2], tree[node*2+1]);
}

int update_tree(int node, int a, int b, int i, int j, int value)
{
  if( b<i || a>j )
    return ;
  if(i<=a && j>=b) return node;
  int mid = (a+b)/2;
  int q =  update_tree( node*2, a, mid, i, j,value );
  int r = update_tree(node*2, mid, b, i, j, value);
  return min( q, r);

}

int query_tree (int node, int a, int b, int i , int j)
{

}

int main()
{
   for(int i=0;i<N;i++) arr[i]= i;
    build_tree(1, 1, 5);
    for(int i=0;i<N;i++)
    {

    }
}