#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<=n;i++)
    if(i*(i+1)/2==n){puts("YES");return 0;}
      puts("NO");
}