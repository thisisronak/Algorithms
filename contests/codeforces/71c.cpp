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
  int n;
  cin>>n;
  int a[n];
  bool flag = true;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==0) flag = false;
  }

  if(flag){
    cout<<"YES"<<endl;
    return 0;
  }

  if(n==3 || n==4 || n==5)  if (flag) {
    cout<<"YES"<<endl;
    return 0;
  }

  n = n/2;
  for(int k = n; k>=3; k--){
    
  }

}