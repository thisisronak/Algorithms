#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='*')a[i+1]=1;
  }

  for(int j,i=1;i<=101;i++)
  {
    for( j=i+1;j<=101;j++)
    {
      if(a[j]==1){
        int diff = j-i;
        if( (a[j+diff]==1) && (a[j+2*diff]==1) && (a[j+3*diff]==1)) {
          cout<<"yes"<<endl; return 0;
        }
      }
    }
  }
  cout<<"no"<<endl;
}