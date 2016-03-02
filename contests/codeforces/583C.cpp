#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;

  int a[n*n];
  for(int i=1;i<=n*n;i++){
    cin>>a[i-1];
    if(i%n==0) cout<<a[i-1]<<" ";
  }

}
