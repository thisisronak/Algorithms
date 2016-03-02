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
  cin>>n;
  int t = 0,tot=0;
  int a[n], b[n];
  for(int i=0;i<n;i++){

    cin>>b[i];
    
    if(t==b[i]){
      continue;
    }

    else if(t>b[i]){      
      a[i] = b[i];
      tot = abs(b[i]-t);
      t += b[i]-t;
    }
    else {
      a[i] = b[i];
      tot = abs(b[i]-t);
      t += t-b[i];
    }
  } 
  cout<<tot<<endl;
}