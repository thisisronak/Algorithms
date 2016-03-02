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
  int n,m; int i;
  cin>>n>>m;
  if(m<n) cout<<n-m<<endl;
  else if(m==n)cout<<"0"<<endl;
 
  else
  {
    for (i = 0; n < m; i++)
     {
        m % 2 ? m++ : m /= 2;
     }
  cout<<i + n - m<<endl;
  }

}