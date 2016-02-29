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
  int n, m, k;
  cin>>n>>m>>k;
  if(n>m){
    cout<<"YES"<<endl;
    return 0;
  }
  int a[n], b[m];
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];

  sort(a,a+n);
  sort(b,b+m);
  reverse(b,b+m);
  reverse(a,a+n);
  for(int i=0;i<n;i++){
    if(a[i]>b[i]){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}