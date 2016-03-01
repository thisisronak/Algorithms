#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
    long long a, b, ans=0;
    
    cin>>a>>b;

    while(a && b){
        ans += a/b;
        a%=b;
        swap(a,b);
    }

    cout<<ans<<endl;
    
}