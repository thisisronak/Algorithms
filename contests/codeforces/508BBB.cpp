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
  // cout<<"v"; 
  string s;cin>>s;
    int i=0,b=0,l=s.size(),a;
    for(i=0;i<l-1;i++){
        if(s[i]<=s[l-1]&&s[i]%2==0){swap(s[i],s[l-1]);b=1;cout<<s;return 0;}
        if(s[i]%2==0) {a=i;b=2;}
    }
    if(b==2) {swap(s[l-1],s[a]);cout<<s;return 0;}
    cout<<"-1";
}