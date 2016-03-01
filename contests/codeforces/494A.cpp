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
  int ref[10] = {2,7,2,3,3,4,2,5,1,2};
  string s;
  cin>>s;
  int res = ref[s[0]-'0']*ref[s[1]-'0'];

    // int n;
  // cin>>n;
  cout<<res<<endl;
  
} 