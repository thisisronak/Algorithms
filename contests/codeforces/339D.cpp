#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

const long long N = (1 << 17) + 100;

long long t[4 * N];
long long a[N];
int height;
long long join(long long, long long, int);
void build(int, int, int, int);
void modify (int, int , int , int , int , int);

long long join(long long a, long long b, int c)
 {
  //height calculated from bottom of the tree
  int x = height - c;
  if(x % 2) {
    return a ^ b;
  }
  else {
    return a | b;
  }
}

void build(int x, int l, int r, int c)
 {
  //leaf node
  if(l == r)
  {
    t[x] = a[l];
  }
  //find the next leaves and allocate responsibility
  else 
  {
    int mid = (l + r) >> 1;
    build(2*x, l, mid, c + 1);
    build(2*x + 1, mid + 1, r, c + 1);
    t[x] = join(t[x + x], t[x + x + 1], c);
  }
}   

void modify(int x, int l, int r, int at, int value, int c) {
  
  //point updations
  if(l ==r)
  {
    t[x] = value;
    return;
  }
  int m = (l + r) >> 1;
  if(at <= m) {
    modify(x + x, l, m, at, value, c + 1);
  } 
  else {
    modify(x + x + 1, m + 1, r, at, value, c + 1);
  }
  t[x] = join(t[x + x], t[x + x + 1], c);
} 



int main()
{
  int  n, m, height;
  cin>>height>>m;
  n = 1<<height;

  for(int i=0;i<n;i++) cin>>a[i];

  build( 1, 1, n, 1);

  for(int i=0;i<m;i++)
  {
    int foo, bar;
    cin>>foo>>bar;
    modify(1,1,n,foo,bar,1);
    cout<< t[1] <<endl;

  }

}