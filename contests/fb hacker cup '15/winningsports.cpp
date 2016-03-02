#include <bits/stdc++.h>
using namespace std;

long long one[2005][2005];
long long two[2005][2005];
int main()
{
  int test;
  cin>>test;
  for(int iter=1;iter<=test;iter++)
  {
    
    for(int i=0;i<2005;i++)
    {
      for(int j=0;j<2005;j++)
      {
        one[i][j]=0;
        two[i][j]=0;
      }
    }
  
    long long a,b;
    cin>>a>>b;
    one[1][0]=1;
    two[1][0]=0;
    one[2][1]=1, one[3][1]=2, one[3][2]=2;
    two[2][1]=1, two[3][1]=1, two[3][2]=2;
    for(int i=2;i<=a;i++)
    {
      for(int j=1;j<i;j++)
      {
        one[i][j]=one[i][j-1] + one[i-1][j];
        two[i][j]=two[i-1][j];
      }
    }
    cout<<"Case #"<<iter<<": "<<one[a][b]<<" "<<two[a][b]<<endl;

  }

}