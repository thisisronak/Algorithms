#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, x, s=0;
  cin>>n>>k;
  while (n--) {
    cin>>x;
    if (x+k<=5) s++;
  }
  cout<<s/3<<endl;
  return 0;
}