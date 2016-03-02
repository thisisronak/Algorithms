#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int max( int a, int b){
  if(a>b) return a;
  else if(b>a) return b;
  return a+1;
}

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n;
  cin>>n;
  int a[n];
  int b[n];
  int maxim =0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    // maxim = max(maxim,a[i]);
  }

  for(int i=n-1;i>=0;i--){
    maxim = max(maxim,a[i]);
    b[i] = maxim;   
    if(b[i]==a[i]) b[i]=0;
    else
      b[i] = maxim+1-a[i];
  } 

  for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
  }
  cout<<endl;

}