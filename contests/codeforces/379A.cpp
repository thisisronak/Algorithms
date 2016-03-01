#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main(){
  int m=0,n=0;
  cin>>m>>n;
  cout<<(m*n-1)/(n-1);
}