#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int sum(int x)
{
  int ans=0;
  while(x!=0)
  {
    ans+=x%10;
    x=x/10;
  }
  return ans;
}

int main()
{
 int n;
 cin>>n;
 double a,b,c;
 for(int i=1;i<=90;i++ )
 {
    a= (-i+(double)sqrt(i*i+4*n))/2;

    if(floor(a)==ceil(a) && i==(sum(a)))
    {
      cout<<a<<endl; return 0;
    }
 }
 cout<<"-1"<<endl;
}