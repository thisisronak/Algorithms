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
  int a[5][5];
  int p,q;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>a[i][j];
      if(a[i][j]==1){
        p = i; q=j;
      }
    }
  } 

  cout<<abs(p-2)+abs(q-2)<<endl;

}