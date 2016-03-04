#include <bits/stdc++.h>
using namespace std;
int parent[100];
int rank[100];

void createSet(int x){
  parent[x] = x;
  rank[x] = 0;
}

int findSet(int x){
  if(x != parent[x]) parent[x] = findSet(parent[x]) ;
  return parent[x];
}

void unionSet(int x, int y){
  int parentX = findSet(x);
  int parentY = findSet(y);
  if ( rank[parentX] > rank[parentY] ) parent[parentY] = parentX;
  else parent[parentX] = parentY;
  if ( rank[parentX] == rank[parentY]) rank[parentY] +=1;
}


int main(){
  int n;
  cin>>n;
  for(int i=0;i<100;i++) {
      createSet(i);
  }
  //assuming there must be n pairs of numbers
  
  for(int i=0;i<n; i++){
    int a, b;
    cin>> a >> b;
    if(findSet(a)!=findSet(b))
      unionSet(a,b);
  }

  for(int i=1;i<=n;i++) cout<<findSet(i)<<endl;

}
