#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int a[1000005];
int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n;
  int count =0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>count;
    a[count]++;
  }
  count =0;
  for(int i=0;i<=1000000;i++){
    if(a[i]>=2){
      a[i+1] += a[i]/2;
      a[i] = a[i]%2;      
    }
  }
}