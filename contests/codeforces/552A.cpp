#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  int n;
  cin>>n;
  long long sum =0;
  for(int i=0;i<n;i++) {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    sum += (c-a+1) * (d-b+1);
  }
  cout<<sum<<endl;
}