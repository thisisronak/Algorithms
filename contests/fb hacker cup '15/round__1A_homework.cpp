#include <bits/stdc++.h>
using namespace std;
const long long limit =10000009;

int p[limit];

void gen() 
{  
  for(int i=2 ; i <=limit; i++)
  {
    if(p[i]==0)
    {  
          for(int j=i;j<=limit;j+=i)
        {  
            p[j]++;
        }
    }
  }


}

int main()
{ 
  double t1=clock();
  gen();
  freopen("homework.txt","r",stdin);
  // freopen("outpu.txt","w",stdout);
  int t;
  int a,b,k;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int count=0;
    cin>>a>>b>>k;
    // cout<<2*3*5*7*11*13*17*19*23*29<<endl;

    for(int j=a;j<=b;j++)
    {
      if(p[j]==k)
      {
        // cout<<j<<endl;
        count++;
      }
    }

    cout<<count<<endl;
  }
   double t2 =clock();
   cout<<(t2-t1)/CLOCKS_PER_SEC <<"Seconds"<<endl;
   //Runs well within a 2 sec time limit
}