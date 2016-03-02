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
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int p[a], q[b];
  for(int i=0;i<a;i++){
    cin>>p[i];
  } 
  for(int i=0;i<b;i++) cin>>q[i];

  int up = q[b-d-1];
  int low = p[c-1];

  if (low<up) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}