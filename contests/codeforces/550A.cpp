#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
vector<int>v;
vector<int>w;
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A' && s[i+1]=='B')
      v.push_back(i);
    if(s[i]=='B'&& s[i+1]=='A')
      w.push_back(i);  
  } 
  int l1 = v.size(), l2 = w.size();
  if(l1>l2)
  for(int i=0;i<l2;i++){
    for(int j=0;j<l1;j++){
      if(abs(w[i]-v[j])>1){
        cout<<"YES"<<endl;
        return 0;
      }
    }
  }
  else
  for(int i=0;i<l1;i++){
    for(int j=0;j<l2;j++){
      if(abs(v[i]-w[j])>1){
        cout<<"YES"<<endl;
        // cout<<v[i]<<" "<<w[i]<<endl;
        return 0;
      }
    }
  }
  cout<<"NO"<<endl;
}