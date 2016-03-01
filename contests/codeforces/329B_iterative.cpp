  #include <bits/stdc++.h>
  using namespace std;
  //ios_base::sync_with_stdio(false);
  #ifdef CORLEONE
    #define d(b) cerr<< #b << " " << b << endl
    #else
    #define d(b)
  #endif

  char g[1234][1234];
  int dist[1234][1234];
  int seen[1234][1234];
  int r, c;
  pair< int, int > start, end;
  int dx[] = {-1, 0, 0, 1};
  int dy[] = {0, -1, 1, 0};

  inline bool range(int x, int y) {
    if((x >= 0 && x < r) && (y >= 0 && y < c)) return true;
    else return false;
  }

  inline void add_seen(const pair< int, int > &a) {
    seen[a.first][a.second] = true;

  }

  inline void add_dist(const pair< int, int > &a, const pair< int, int > &b) {
    dist[b.first][b.second] = dist[a.first][a.second] + 1;
  }

  void flood_fill() {
    queue< pair< int, int > > q;
    q.push(end);
    while(!q.empty()) {
      pair< int, int > u = q.front();
      q.pop();
      add_seen(u);
      {
        if(u.first==start.first && u.second == start.second){
          // cout<<"yay"<<endl;
          return ;}
      }
      for(int id = 0; id < 4; id++) {
        int x = u.first + dx[id];
        int y = u.second + dy[id];
        if(!range(x, y)) continue;
        if(!seen[x][y] && g[x][y] != 'T') {
          add_dist(u, make_pair(x, y));
          q.push(make_pair(x, y));
          add_seen(make_pair(x, y));
        }
      }
    }
  }

  int main() {
    int test;
    scanf("%d",&test);
    while(test--){
      int n;
    scanf("%d",&n);
    int aa,bb,cc,dd,pp,qq;
    scanf("%d%d%d%d%d%d",&aa,&bb,&cc,&dd,&pp,&qq);
    memset(dist, -1, sizeof dist);
    memset(seen, 0, sizeof seen);
    memset(g, '0', sizeof g);
    // cin >> r >> c;
    r = n;
    c = n;
    for(int i = 0; i < r; i++) {
      for(int j = 0; j < c; j++) {
        if(i==pp-1 && j==qq-1){
          g[i][j]='T';
          
        }
        else if(i==aa-1 && j==bb-1){
          g[i][j]='S';
          start.first = i;
          start.second = j;

        }
        else if(i==cc-1 && j==dd-1){
          g[i][j]='E';
          end.first = i;
          end.second = j;
        }
        else g[i][j]='0';

        // cout<<g[i][j];
      }
      // cout<<endl;
    }

    flood_fill();
    
    int req = dist[start.first][start.second];
    printf("%d\n",req+1);
    // int cnt = 0;

    // for(int i = 0; i < r; i++) {
    //   for(int j = 0; j < c; j++) {
    //     if(dist[i][j] == -1) continue;
    //     if(g[i][j] > '0' && g[i][j] <= '9' && dist[i][j] <= req) {
    //       cnt += g[i][j] - '0';
    //     }

    //   }
    // }
    // // cout<<dist[aa][bb]<<endl;
    // cout << cnt << endl;
  }
  }