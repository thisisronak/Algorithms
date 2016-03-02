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
  long long count=0,rem;
  long long a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==100){
      count+=a[i]/10;
    }
    
    else{
    count+=a[i]/10;
    rem = a[i]%10;
    b[rem]++;
  }

  }
// for(int i=0;i<=10;i++) cout<<b[i]<<" ";cout<<endl;
  
  for(int i=9;i>=1 && k>0 ;i--){
    if( b[i]>0 && k>0){

      // cout<<i<<" "<<count<<" "<<k<<" "<<endl;

      count += (min(k,b[i]*(10-i)))/(10-i);

      k = k-min(k,(b[i]*(10-i)));


    }
  }

  long long diff=0;
  if(k>0){
    for(int i=0;i<n;i++){
      if(a[i]%10!=0)
      a[i] = min(((a[i]/10)*10)+10,100);
      else 
       a[i] =min(((a[i]/10)*10),100);
      
      if(a[i]!=100){
        diff += (100 -a[i])/10;
      }
      // cout<<diff<<" ";
    }

    // k = k-min(k,diff*10);
    count += min(k,diff*10)/10;
  }


  cout<<count<<endl;

}