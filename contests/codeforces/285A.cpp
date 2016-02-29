#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main(){
  int n, k;
  cin>>n>>k;
  int a = 1e5;
  cout<<a<<" ";
  for(int i=0;i<n-1;i++){
    if(k){
      cout<<--a<<" ";
      --k;
    }
    else
      cout<<++a<<" ";
  } 
}