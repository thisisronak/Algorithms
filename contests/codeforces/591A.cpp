#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  double d, a, b, c;
  cin>>d>>a>>b;
  c = a*d/(a+b);
  cout << std::setprecision(6)<<c<<endl;
}