#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int maxim(int a,int b){
  if (a>b) return a;
  return b;
}
int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int p, q, a,b,c,d;
  cin>>p>>q>>a>>b>>c>>d;

  if ( (a+c<=p) && maxim(b,d)<=q ) cout<<"YES"<<endl; 
  else if ( (a+c<=q) && maxim(b,d)<=p ) cout<<"YES"<<endl;
  else if ( maxim(a,c)<=p && (b+d)<=q ) cout<<"YES"<<endl; 
  else if ( maxim(a,c)<=q && (b+d)<=p ) cout<<"YES"<<endl; 
  else if ( (a+d<=p) && maxim(b,c)<=q ) cout<<"YES"<<endl; 
  else if ( (a+d<=q) && maxim(b,c)<=p ) cout<<"YES"<<endl;
  else if ( maxim(a,d)<=p && (b+c)<=q ) cout<<"YES"<<endl; 
  else if ( maxim(a,d)<=q && (b+c)<=p ) cout<<"YES"<<endl; 
  
  else cout<<"NO"<<endl;

}