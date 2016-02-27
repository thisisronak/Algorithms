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
  string s;
  string p, q;
  cin>>s;
  int l = s.size()-1;
  for(int i=0, j=l;i<=l/2&&j>=l/2;i++,j--){
    p +=s[i];
    q +=s[j];
    if(p==reverse(q.begin(),q.end()))
  }
}