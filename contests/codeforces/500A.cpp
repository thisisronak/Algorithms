#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

bool seen[100010];
int a[100010];

int main() {
  int n, t;
  set <int> s;
  cin >> n >> t;
  for(int i = 1; i <= n-1; i++) {
    cin >> a[i];

  }
  int index =1;
  s.insert(index);
  index = index+a[index];
  int count=1;
  while(count<n)
  {
    count++;
    s.insert(index);
    index = index + a[index];  
    // cout<<index<<" ";  
  }

  if(s.find(t)==s.end()) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;


}