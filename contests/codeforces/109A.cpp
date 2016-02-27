#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int n,i,x,y;
int main(){
cin>>n;
for(i=0;i<=n/4;i++){
  if((n-(4*i))%7==0){x=i; y=(n-4*i)/7; break;}
}
for(i=0;i<x;i++)
   cout<<4;

for(i=0;i<y;i++)
   cout<<7;

if(x==0 && y==0) cout<<-1<<endl;
}