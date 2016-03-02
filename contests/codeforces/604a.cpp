#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int main() {
  int m[5],w[5],hs,hu,sum=0;
  for(int i=0;i<5;i++)
    cin>>m[i];
    
    for(int i=0;i<5;i++)
    cin>>w[i];
    
  cin>>hs>>hu;
  
  for(int i=0;i<5;i++)
  sum+=max(150*(i+1),((250-m[i])*2*(i+1)-50*w[i]));
  sum+=hs*100-hu*50;
  cout<<sum<<endl;
  return 0;
}