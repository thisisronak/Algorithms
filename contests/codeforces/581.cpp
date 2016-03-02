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
  int a,b;
  cin>>a>>b;
  int p = max(a,b);
  int q= min(a,b);
  p = p-q;
  p = p/2;
  cout<<q<<" "<<p<<endl; 
}