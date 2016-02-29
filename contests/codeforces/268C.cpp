#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  int m,n,i,j;
  cin>>n>>m;
  n=min(n,m);
  cout<<n+1<<endl;
  for(i=0;i<=n;i++)
    cout<<i<<"  "<<n-i<<endl;

}
