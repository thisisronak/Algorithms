#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

map<string,int> a;

int main()
{
  int n;
  string s;
  
  cin>>n;
  while(n--)
  {
    cin>>s;
    a[s]++;
    if(a[s]==1)
      cout<<"OK\n";
    else
      cout<<s<<a[s]-1<<endl;
  }
  return 0;
}