#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

long long min( long long a, long long b)
{
  return a>b?b:a;
}

long long max(long long a, long long b)
{
  return a>b?a:b;
}

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  long long a,b,c;
  cin>>a>>b>>c;
  long long maxim = (a+b+c), ans =0;
  long long aa = min( a, min(b,c) );
  long long bb = max( a, max(b,c));
  long long cc = maxim -aa-bb;
  if( (a==b || b==c || c==a) && a>=3 && b>=3 && c>=3 ) cout<<maxim/3<<endl;
  else if(a%3==0 && b%3==0 && c%3==0) cout<<maxim/3<<endl;
  else{
    ans += min( a, min(b,c) );
    bb -=aa;
    cc -=aa;
    // cout<<ans<<" "<<bb<<" "<<cc;
    ans+=bb/3+cc/3;
    cout<<ans<<endl;
  }  
}