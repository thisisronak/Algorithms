#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int main()
{
  freopen("input.txt","r",stdin);
  int n,a[3]={},tmp;
    cin>>n;
    for (int i=0;i<n;i++)
    {
      cin>>tmp;
      a[i%3]+=tmp;
    }
    if (a[0]>a[1]&&a[0]>a[2])
        puts("chest");
    else if (a[1]>a[2])
        puts("biceps");
    else
        puts("back");
      return 0;
  
}
