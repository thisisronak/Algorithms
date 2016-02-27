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
  int x,y,a,b;
  vector<int>v;
  cin>>x>>y>>a>>b;
  int count =0;
  while(x>=a){
    for(int i=min(x-1,y);i>=b;i--){
      count++;
      v.push_back(x);
      v.push_back(i);
      // cout<<x<<" "<<i<<endl;
    }
    x--;
  }  

  cout<<count<<endl;

  for(int i=v.size()-1;i>=0;i=i-2){
    cout<<v[i-1]<<" "<<v[i]<<endl;
  }
}