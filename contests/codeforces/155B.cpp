#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int n,r,ans;
pair <long,long> a[100010];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
     cin>>a[i].second>>a[i].first;
    sort(a+1,a+n+1);
    r=1;
    while(r>0 and n>0){
     ans+=a[n].second;
     r+=a[n].first-1;
     n--;         
         }
    cout<<ans;     
  }