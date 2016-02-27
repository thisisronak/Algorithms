#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  int n;
  string s;
  cin >> n >> s;
  s = 'R' + s;
  int cur = 0;
  for (int i = 0; i < n; ++i) {
    int h = 1;
    for (int j = i + 1; j < n && s[j] != 'R'; ++j) {
      h += s[j] == 'L';
    }
    if (s[i] == 'R') {
      cur = max(cur + 1, h);
    }
    else if (s[i] == 'L') {
      cur = min(cur - 1, h);
    }
    else {
      cur = cur; // :)
    }
    
    cout << cur << ' ';
  }
  
  return 0;
}