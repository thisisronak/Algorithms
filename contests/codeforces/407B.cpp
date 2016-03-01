#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


#define MOD 1000000007
using namespace std;

long long N, p[1024], a[1024];;

int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> p[i];
        p[i]--;
    }

    for(int i=1; i<=N; i++)
        a[i] = (2 * a[i-1] + 2 + MOD - a[p[i-1]]) % MOD;

    cout << a[N] << endl;
}