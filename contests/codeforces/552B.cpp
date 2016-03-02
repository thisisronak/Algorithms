#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int n;
long long int m;
int main (){

  cin>>n;

  for(int i=1;i<=n;i*=10){
    m=m+n-i+1;
  }
  
  cout<<m<<endl;

}