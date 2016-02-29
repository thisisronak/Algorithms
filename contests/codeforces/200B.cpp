#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
//std::setprecision(9)


int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n;
  cin>>n;
  double res=n, ans=0,temp;
  while(n--){
    cin>>temp;
    ans+=temp;
  } 
  ans = ans/res;
  cout<<setprecision(9)<<ans<<endl;
}