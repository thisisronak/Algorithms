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
  int n, t;
  cin>>n>>t;

  if(t==10&&n==1) cout<<"-1"<<endl;
  else if (t==10){
    cout<<t;
    for(int i=1;i<n-1;i++){
      cout<<"0";
    }
  }
  else if(n==1 && t!=10)cout<<t<<endl;

  else{
  
    cout<<t;
    for(int i=1;i<n;i++){
      cout<<"0";
    }
  }


}