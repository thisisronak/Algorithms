#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
    string s; int k;
    cin>>s>>k;
    int len = s.size();
    int l = len/k;
    if(len%k == 0){
      for(int i=0;i<len;i=i+l){
        string t = s.substr(i,l);
        string r = t; 
        reverse(t.begin(), t.end());
        if(r==t) continue;
        else{
          cout<<"NO"<<endl;
          return 0;
        }
        
      }cout<<"YES"<<endl;
    } 
    else {
      cout<<"NO"<<endl;
    }
}