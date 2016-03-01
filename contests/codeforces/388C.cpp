#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

vector<int> v[101];

int main()
{
  int n;
  cin>>n;
  int temp,td;
  for(int i=0;i<n;i++)
  {
     cin>>temp;
     for(int j=0;j<temp;j++)
     {
        cin>>td;
        v[i].push_back(td);
     }

  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<(int)v[i].size();j++)
      cout<<v[i][j]<<endl;
  }


}