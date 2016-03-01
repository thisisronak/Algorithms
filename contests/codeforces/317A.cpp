#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  long long x,y,i=0,m,a,b;
  cin>>x>>y>>m;
  if(x>=m || y>=m) {
    cout<<"0"<<endl;
    return 0;
  }
  while(i!=1e6+1){
    i++;
    a = max(x,y);
    b = min(x,y);
    x = a+b;
    y = a;
    if(x>=m || y>=m) {
    cout<<i<<endl;
    return 0;
  } 

} cout<<"-1"<<endl;}