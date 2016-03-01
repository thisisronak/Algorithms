#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int a[100005];
vector<int>v;
int main()
{
  int m;
  cin>>m;
  int count =0;
  for(int i=0;i<m;i++){
    int temp;
    cin>>temp;
    a[temp]++;
  } 
  int flux;
  for(int i=0;i<=100000;i++){
    if(a[i]>0){
      count++;
      v.push_back(i);
      a[i]--;
      flux = i;
    }
  }
  for(int i=flux-1;i>0;i--){
    if(a[i]>0){
      count++;
      v.push_back(i);
      a[i]--;
    }
  }

  cout<<count<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }

}