#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int l=(n>m);
    if(n>m+1 || (m+1)/2>n+1) printf("-1\n");
    else {
        while(n || m) {
            if(2*n>=m && l) printf("0"), n--, l=0;
            else printf("1"), m--, l=1;
        }
        //while(n--) printf("0");
        //while(m--) printf("1");
        printf("\n");
    }
    return 0;
}