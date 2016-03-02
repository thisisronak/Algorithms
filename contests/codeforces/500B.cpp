#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
#define MAX 305;
vector<pair< int, int> >vv; int a[1000];
int has[1000][1000];
int main()
 {
  int n,pp,qq,temp;
 
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  } 
  // int pp,qq;
  for(int i = 0; i < n; i++)
   {
    for(int j = 0; j < n; j++) 
    {
      char cc;
      cin>>cc;
      if(cc == '1')
       {
        pp = max(i, j);
        qq = min(i, j);
        vv.push_back(make_pair(qq,pp));
      }
    }
  }

  for(int i = 0; i < 305; i++)
   {
    for(size_t j = 0; j < vv.size(); j++)
     {
      int x = vv[j].second, y = vv[j].first; 
      if(a[y] > a[x]) swap(a[y], a[x]);
    }
  }

  for(int i = 0; i < n; i++) 
    {
      cout << a[i] << " ";
    }
  
  cout << endl;
  return 0;
}