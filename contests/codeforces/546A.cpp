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
  long long k, w, n, ans, res=0;
  cin>>k>>w>>n;
  if(n%2==0) ans = k* (n/2)* (n+1);
  else ans = k* n* (n+1)/2;
  if(ans<=w) cout<<"0"<<endl;
  else cout<<ans-w<<endl; 
}