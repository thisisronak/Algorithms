#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=0;
  while(n>0)
  {
    i++;
    int r=n;
    int max=0;
    while(r>=1)
    {
      if(max<r%10)
        max=r%10;
      r/=10;
    }
    n-=max;
//    cout<<n<<endl;
  }
  cout<<i<<endl;

}