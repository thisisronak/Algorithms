#include <bits/stdc++.h>
using namespace std;

#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

long long binomialCoeff(long long n, long long k);

int main()
{
    cout<<binomialCoeff(100, 20)<<endl;  
}


long long  binomialCoeff(long long  n, long long k)
{
    long long* C = (long long*)calloc(k+1, sizeof(long long));
    long long i, j, res;

    C[0] = 1;

    for(i = 1; i <= n; i++)
    {
        for(j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }

    res = C[k];  // Store the result before freeing memory

    free(C);  // free dynamically allocated memory to avoid memory leak

    return res;

}