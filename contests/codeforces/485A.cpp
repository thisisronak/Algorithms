#include <bits/stdc++.h>
using namespace std;

#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

long long int m,a;
int main(){
  cin>>a>>m;
  for(int i=0;i<1000000;i++){
    a=a+(a%m);
    if(a%m==0){cout<<"Yes\n";return 0;}
  }
  cout<<"No\n";
  return 0;
}