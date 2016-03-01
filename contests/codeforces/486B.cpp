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
  int n,m;
  cin>>m>>n;
  int a[m][n] ;
  int b[m][n]  ;

  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }

    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        b[i][j] = 1;
      }
    }

 for(int i=0;i<m;i++)
 {
    for(int j=0;j<n;j++)
    {
      if(a[i][j]==0)
        {
          for(int k=0;k<n;k++) b[i][k] = 0;
          for(int k=0;k<m;k++) b[k][j] = 0;
        }
    
    }
 }

/*for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<b[i][j]<<" ";
      }
    cout<<endl;
  }*/

int flag =0;

 for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
          flag =0;
          if(a[i][j] == 1 )
          {
            for(int k=0;k<n;k++) if(b[i][k] == 1) {flag =1; break;}
            for(int k=0;k<m;k++) if(b[k][j] == 1) {flag =1; break;}
            if(flag ==0)
            { 
              cout<<"NO"<<endl; return 0;
            }
          }
         // d(flag);
         // if(flag == 1) continue;
          
      }
    }


    cout<<"YES"<<endl;
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<b[i][j]<<" ";
      }
    cout<<endl;

    }


}