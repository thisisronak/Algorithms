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
  long long temp, res;
  while(n--){

    cin>>temp;
    if(temp==1){
      cout<<"NO"<<endl;
      continue;
    }
    res = sqrt(temp);
    if( res*res==temp)
      cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  } 
}