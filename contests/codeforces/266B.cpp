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
  long n,i,m,j,l;
  cin>>n>>m>>s;
  for(i=0;i<m;i++)
    for(j=0;j<s.size()-1;j++)
    {
      if(s[j]=='B' and s[j+1]=='G')
      {
        swap(s[j],s[j+1]);
        j++;
      }
    }
  cout<<s;
}