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
  vector<string>v;
  cin>>n;
  string temp;
  for(int i=0;i<n;i++) {
    cin>>temp;
    v.push_back(temp);
  }
  long long count =0;
  for(int i=0,j=1;i<n;){
    // cout<<v[i][1]<<endl;
    while(v[i][1]==v[j][0]){
      j++;
    }
    if(v[i][1]!=v[j][0]){
      count++;
      i=j;
      j++;
    }
  }
  cout<<count<<endl;

}