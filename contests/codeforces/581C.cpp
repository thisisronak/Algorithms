#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

long long min(long long a, long long b){
  if(a<b)return a;
  return b;
}

int b[110];

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  long long n,k;
  cin>>n>>k;
  long long count=0;
  long long a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[a[i]]++;
    count += a[i]/10;
  }
  sort(a,a+n); 
  
  for(int i=0;i<n;i++){
    if(a[i]==100) continue;

    else{
      if(a[i])
    }
  }

  cout<<count<<endl;
}