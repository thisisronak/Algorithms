#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

string s[123];
bool ss[123];
int n, m;

void res(int id);

int main() {
  memset(ss, false, sizeof ss);
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  
  for(int i = 0; i < 100; i++) {
  for(int i = 1; i < n; i++) {
      if(s[i - 1] > s[i]) {
      for(int id = 0 ; id < (int) s[i].size(); id++) {
        if(s[i - 1][id] > s[i][id]) {
          res(id);
          break;
          }
        }
      }
    }
  }
  cout << m - s[0].size() << endl;
}

void res(int id) {
  for(int i = 0 ; i < n; i++) {
    s[i].erase(s[i].begin() + id);
  }
}