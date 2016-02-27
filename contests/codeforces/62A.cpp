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
   int a,b,c,d;
    cin>>a>>b>>c>>d;
    if ((d-a>=-1 && d-a<=a+2) || (c-b>=-1 && c-b<=b+2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}