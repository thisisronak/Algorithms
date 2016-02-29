#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int n, k;
string s;

int main() {
    cin >> n >> k >> s;
    if (k > 3) k = 3;
    int mn = 0;
    if (k == 2) {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (s[i]%2 != i%2)
                cnt++;
        for (int i = 0; i < n; i++) {
            if (cnt < n-cnt)
                s[i] = 1-i%2+'A';
            else
                s[i] = i%2+'A';
        }
        mn = min(cnt, n-cnt);
    } else if (k == 3) {
        for (int i = 1; i < n; i++) if (s[i] == s[i-1]) {
            mn++;
            for (char c = 'A'; c <= 'C'; c++)
                if (s[i-1] != c && (i+1 == n || s[i+1] != c))
                    s[i] = c;
        }
    }
    cout << mn << endl << s << endl;
    return 0;
}