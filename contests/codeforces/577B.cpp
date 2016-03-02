#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
// int a[1000005];
int has[1005];
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);

 int n, m;
 int flag =1;
 cin>>n>>m;

 for(int i=0;i<n;i++){
  int temp;
  cin>>temp;
  if(temp==m || temp%m==0) {
    flag =1;
    break;
  }
  else{
    has[temp%m]++;
  }
}

  

 if(flag) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
  
}