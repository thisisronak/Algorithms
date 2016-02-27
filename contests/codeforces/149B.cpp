#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

vector< pair<int, int> > v;
int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a, b;
    cin>>a>>b;
    v.push_back(make_pair(a,b));
  }
  int diff = -1,l=INT_MAX,r=INT_MIN, num=-1;
  for(int i=0;i<n;i++){
    if (l>=v[i].first && r<=v[i].second && diff< v[i].second - v[i].first){
      l = v[i].first;
      r = v[i].second;
      diff = v[i].second - v[i].first;
      num = i+1;
    }

  }

  for(int i=0;i<n;i++){
    if (l>v[i].first || r<v[i].second || diff< v[i].second - v[i].first){
      num = -1;
      break;
    }

  }
  cout<<num<<endl;
}