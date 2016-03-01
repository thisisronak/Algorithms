#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


using namespace std;
long long lib_gcd(long long a, long long b)
{
  long long k;
  while(b)
  {
    a %= b;
    k = a;
    a = b;
    b = k;
  }
  return a;
}

int main() {
  long long x, y;
  cin>>x>>y;
  for(long long i = x; i <= y; i++) {
    for(long long j = i + 1; j <= y; j++) {
      for(long long k = j + 1; k <= y; k++) {
        if(lib_gcd(i, j) == 1 && lib_gcd(j, k) == 1 && lib_gcd(i, k) > 1) {
          cout << i << " " << j << " " << k << endl;
          return 0;
        }
      }
    }
  }
  cout << -1 << endl;
}