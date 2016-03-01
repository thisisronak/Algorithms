#include <bits/stdc++.h>
using namespace std;
int parent[100];
int ranking[100];
int size[100];
int has[100];
void createSet(int x){
  parent[x] = x;
  ranking[x] = 0;
  size[x] = 1;
}

long long power(int p, int q){
  long long ans = 1;
  for(int i=1;i<=q;i++){
    ans = ans*p;
  }
  return ans;
}

int findSet(int x){
  if(x != parent[x]) parent[x] = findSet(parent[x]) ;
  return parent[x];
}

void unionSet(int x, int y){
  int parentX = findSet(x);
  int parentY = findSet(y);
  if ( ranking[parentX] > ranking[parentY] ) {
    parent[parentY] = parentX;
    size[parentY] += size[parentX];
  }
  else {
    parent[parentX] = parentY;
    size[parentX] += size[parentY];
  }
  if ( ranking[parentX] == ranking[parentY]) ranking[parentY] +=1;
}


int main(){
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++) {
      createSet(i);
  }
  //assuming there must be n pairs of numbers
  
  for(int i=0;i<m; i++){
    int a, b;
    cin>> a >> b;
    a--; b--;
    if(findSet(a)!=findSet(b))
      unionSet(a,b);
  }

  for(int i=0;i<n;i++){
    int temp = findSet(i);
    has[temp]++;
  }
  // set<int> ss;
  // long long danger = 1;
  int maxim =1;
  for(int i=0;i<n;i++){
    maxim = max( has[i], maxim);
  }
  cout<<maxim<<" ";
  cout<<power(2,maxim-1)<<endl;
}
