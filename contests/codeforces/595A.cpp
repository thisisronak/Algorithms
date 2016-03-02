#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n, m;
  cin>>n>>m;
  int a, b, count =0;
  for(int i=0;i<n;i++) {
    for(int j=0;j<2*m-1;j=j+2){
      cin>>a>>b;
      if(a==1 || b==1) count++;
    }
  }
  cout<<count<<endl;
}