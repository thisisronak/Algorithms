#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  long long n, x;
  long long count =0;
  cin>>n>>x;
  for(long long i=1;i<sqrt(x);i++){
    if(x%i==0 && x/i<=n) count+=2;
  } 
  long long temp = sqrt(x);
  if ( temp * temp ==x && temp<=n) count++;
  cout<<count<<endl;
}