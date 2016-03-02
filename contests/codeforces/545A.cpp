#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
 vector<int>v;
 int a[105][105];
int main()
{
  
  int n;
  cin>>n;

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin>>a[i][j];
    }
  }
  int count =0;
  for (int i = 0; i < n; ++i)
  {
    int flag=0;
    for (int j = 0; j < n; ++j)
    {
      if(a[i][j]==3 || a[i][j]==1){
        flag =1; break;
      }
    }
    if(flag==0) {
      count++;
      v.push_back(i+1);
    }
  }

  cout<<count<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}