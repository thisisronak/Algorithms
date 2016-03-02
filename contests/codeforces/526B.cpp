#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

void dfs(){
  
}

vector<int> v[1000][1000];
int main()
{
  int n;
  cin>>n;
  int temp;
  for(int i=1;i<=pow(2,n+1)-2;i++){
    cin>>temp;
    int ind = floor(i/2);
    v[i][ind].push_back(temp);
  }
  dfs();

}