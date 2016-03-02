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
  int n;
  
  cin>>n; int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  bool flag = false;
  int count =0;
  // int limit = 
  while(count!=50000){
    count++;
    for(int i=0;i<n;i++){
      if(i%2==0)//even begin
      {
        a[i] = (a[i]+1)%n;
      }
      else if(a[i]>0){
        a[i]--;
      }
      else a[i] = n-1;
    }
    int cun = 0;
    for(int i=0;i<n;i++){
      if(a[i]!=i){
        break;
      }
      else{
        cun++;
      }
    }
    if(cun == n){
      flag = true;
      break;

    }
  }
  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;  
}