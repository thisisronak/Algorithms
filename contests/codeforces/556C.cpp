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
  int n, k;
  cin>>n>>k;
  int ind;
  vector<int>v[k];
  for(int i=0;i<k;i++){
    int temp,tmp;
    cin>>temp;
    for(int j=0;j<temp;j++){
      cin>>tmp;
      v[i].push_back(tmp);
      if(tmp==1) ind = i;
    }
  }
  long long count =0;
  for(int i=0;i<v[ind].size();i++){
    if(v[ind][i]== i+1) continue;
    else{
      count+= 2*(v[ind].size() - i);
      // cout<<count<<" @! ";
      break;
    }
  }

  for(int i=0;i<k;i++){
    
      if(v[i][0]==1) continue;

      else{
        count += (2*v[i].size()-1);
        // cout<<count<<" ";
       }
      
  }
  // cout<<endl;
  cout<<count<<endl;
}