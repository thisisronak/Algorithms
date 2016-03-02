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
  pair<int, int> a[n+5];
  long long cnt = 0,minim=10e+9;
  for(int i=0;i<n;i++){
    cin>>a[i].first>>a[i].second;
    if(a[i].second<minim){
      minim = a[i].second;
      cnt += a[i].first * a[i].second;
    }
    else{
      cnt += a[i].first * minim;
    }
  }

  cout<<cnt<<endl;  

}