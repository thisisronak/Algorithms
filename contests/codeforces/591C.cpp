#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int get(int a, int b , int c) {
    int x = a-b;
    int y = b-c;
    int z = a-c;
    if(x*y > 0) return b;
    if(x*z > 0) return c;
    return a;
}

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n;
  int a[n];
  int b[n];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int count =0;
  for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1])count++;
  }
  if(count>n/2){
    cout<<"-1"<<endl;
    return 0;
  }
  b[0] = a[0];
  b[n-1] = a[n-1];

  for(int i=1;i<n-1;i++){
    b[i] = get(a[i-1],a[i], a[i+1]);

  }
  bool flag = false;
  int count2=0;
  for(int i=0;i<n-1;i++){
    if(a[i]!=b[i]){
      flag = true;
    }
    if(b[i]>b[i+1]){
      count2++;
      a[i] = b[i];
    }

  }
  if(count2>=count) {
    cout<<"-1"<<endl;
    return 0;
  }


}