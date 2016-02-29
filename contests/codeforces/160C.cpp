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
  long long n , k, tem, met;
  cin>>n>>k;
  long long a[n];
  for(long long i =0;i<n;i++){
    cin>>a[i];
  } 

  sort(a, a+n);
  tem = ceil((double)k/n);
  if(k>n){
    met = k-n-1;

  }
  else met = k-1;
  cout<<a[tem-1]<<" "<<a[met]<<endl;
}