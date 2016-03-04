#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

bool seen[105][105];
int val[105][105];

bool check(int x, int y){

  if( (x<1 || x>100) || (y<1 || y>100))
    return false;
  
  return true;

}

void floodfill() {
  queue < pair<int, int> > q;
  q.push(make_pair(0, 0));
  while(!q.empty()) {
    int x = q.top().first;
    int y = q.top().second;
    q.pop();
    if(seen[x][y] == true) continue;
    seen[x][y] = 1;
    if(range(x + 1, y)) q.push({x+1, y});
    if(range(x - 1, y)) q.push({x-1, y});
    if(range(x, y-1)) q.push({x, y -1});
    if(range(x, y+1)) q.push({x, y+1});
  }
}

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int a;
  cin>>a;

  seen[a][a]=false;
  val[a][a]= 1;

  floodfill( a,a);
  for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}