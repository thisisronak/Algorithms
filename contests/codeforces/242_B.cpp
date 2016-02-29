#include<bits/stdc++.h>
using namespace std;

struct node
{
  int l;
  int r;
  int id;
}a[100005];

bool comp (node a, node b)
{
  if (a.l<b.l) return true;
  else if (a.l>b.l) return false;
  else if (a.r>b.r) return true;
  else return false;
}

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i].l>>a[i].r;
    a[i].id = i+1;
  }
    sort(a, a+n, comp);
  int i=0,j=1;
  for( i=0, j=1;j<n;)
  {
    if(a[i].l<= a[j].l && a[i].r>=a[j].r)
    {
      j++;
    }
    else break;
  }

  if(j==n)
  cout<<a[0].id<<endl;
  else
  cout<<"-1"<<endl;


}
