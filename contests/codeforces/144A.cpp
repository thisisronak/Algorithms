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
  int n;
  cin>>n;
  if(n%2!=0) cout<<"-1"<<endl;
  else if(n%2==0)
  {
    for(int i=2,j=1;i<=n;i+=2,j+=2)
    {
      cout<<i<<" "<<j<<" ";
    }
  }
  /*else
  {
    for(int )
  }*/
}