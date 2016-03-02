#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif



int main()
{
    long long n,i;
    cin>>n;
    for(i=2;i*i<=n;i++){
        if(n%(i*i)==0){
            n/=i;
            i=1;
        }
    }
    cout<<n ;
}