#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

vector<int>v;
int main()
{
  string s, t, p;
  cin>>s>>t;

  for(int i=0;i<s.size();i++){
    if(s[i]!=t[i]){
      v.push_back(i);
    }

  }

  int n = v.size();
  p = s;
  if(n%2!=0) cout<<"impossible"<<endl;
  else{
    for(int i=n/2;i<n;i++){
      if(p[v[i]]=='0')p[v[i]]='1';
      else p[v[i]]= '0';
    }
    cout<<p<<endl;
  }

}