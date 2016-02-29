#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1) {cout<<a[0]<<endl; return 0;}
    sort(a,a+n);
    int flag =0;
    for(int i=1;i<n;i++)
    {
      if(a[i]%a[0]!=0) {flag =1; break;} 
    } 
    if(flag==1) {cout<<"-1"<<endl; return 0;}
    else cout<<a[0]<<endl;

}