#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int main() {
  int c, d, n, m, k;
  cin >> c >> d >> n >> m >> k;
  if (n * m <= k)
    cout << 0 << endl;
  else
    cout << min(min((m * n - k) * d, (n * m - k + n - 1) / n * c), (n * m - k) / n * c + ((n * m - k) % n) * d) << endl;
  return 0;
}