#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int n, a, b, v[110];
int main()
{
  cin >> n >> a >> b;
  if (b == 0 && a == n - 1 && n != 1) v[0] = -1;
  
  v[1] = 1;
  int last = 1;
  for (int i = 1; i <= b; ++i, last *= 2)
    v[i + 1] = 2 * last;
  
  if (b == 0) v[2] = v[1], ++b;
  for (int i = 1; i <= a; ++i, ++last)
    v[b + 1 + i] = last + 1;
  for (int i = 1; i <= n - a - b - 1; ++i)
    v[a + b + 1 + i] = 1;
  
  if (v[0] == -1) cout << -1;
  else for (int i = 1; i <= n; ++i)
    cout << v[i] << ' ';
}