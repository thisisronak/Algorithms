#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int a[305];

int main()
{
  int m,t,r;
  cin>>m>>t>>r;
  int ghost[m];
  for(int i=0;i<m;i++)
  {
    cin>>ghost[i];
  }  
  sort(ghost, ghost+m);
  int count=0;
  for(int i=0;i<m;i++)
  {
    count+=r;
    for(int j=ghost[i];j<=t;j++)
    {
      a[j]+=count;
    }
  }

  for(int i=0;i<m;i++)
  {
    if(a[ghost[i]]==r)
  }
}