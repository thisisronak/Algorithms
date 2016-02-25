#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl
int a[] = {1,2,3,4,5,5,6,7,8,9};
int bsearch(int l,int r,int x)
{
  int id = l/2+(r-l)/2;
  if(a[id]==x) return id;
  else if (x>a[id]) return bsearch(id,r,x);
  else return bsearch(l,id,x);
}

int main()
{
  // int a[] = {1,2,3,4,5,7,9,-1,10,100};
  int b[] = {1,2,4,4,4,4,4,5,6,7};
  // sort(a,a+10);
  cout<<bsearch(0,9,5)<<endl;
  /*cout<<binary_search(a,a+10,-1)<<endl;
  cout<<upper_bound(b,b+10,4)-b<<endl;
  cout<<lower_bound(b,b+10,4)-b;
  stl thingy*/ 
}