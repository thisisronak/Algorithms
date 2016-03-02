#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  long long n, m, p=0, q=0;
  cin>>n>>m;
  long long a;
  if(n==1) {cout<<"1"<<endl; return 0;}
  
  if(n==m) {cout<<"m-1"<<endl; return 0;  }

  if(m<=n/2) a = n/2+1;
  else a = n/2;
}