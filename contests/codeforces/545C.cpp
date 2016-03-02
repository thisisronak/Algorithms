#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main(){
  int n;
  cin>>n;
  pair<int, int> a[n];
  for(int i=0;i<n;i++) {
    int x,y;
    cin>>x>>y;
    a[i].first = x;
    a[i].second = y;
  }
  if(n==1) {
    cout<<"1"<<endl;
    return 0;
  }
  if(n==2){
    cout<<"2"<<endl;
    return 0;
  }

  int count =2;
  for(int i=1;i<n-1;i++){
    if(a[i-1].first+ a[i].second<a[i].first) {
      count++;
      // cout<<count<<" ";
    }
    else if(a[i].second + a[i].first<a[i+1].first){
      count++;
      // cout<<count<<" ";
      a[i].first = a[i].second + a[i].first;
    }
  }
  cout<<count<<endl;
  
}