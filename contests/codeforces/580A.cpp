#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  long long int n,i,ans=1,m=1;
  cin>>n;
  long long a[n];
  cin>>a[0];
  for (i=1;i<n;i++)
  {
    cin>>a[i];
    if (a[i] >= a[i-1])ans++;
    else ans=1;
    m=max(m,ans);
  }
  cout<<m<<endl;
  return 0;
}