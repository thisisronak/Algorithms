#include<bits/stdc++.h>
using namespace std;
#define limit 10000009
#define long long ll
vector <int > p(limit,1);

void gen() // used to generate the primes below 10^7
{
//  memset(p,0,sizeof(p));
  p[0]=p[1]=0,p[2]=1;
  
  for(int i=2 ; i * i <=limit; i++)
  {
    if(p[i])
    {   
          for(int j=i*i;j<=limit;j+=i)
          p[j]=0;
    }
  }
}

int main()
{
  gen();
  int n;
  cin>>n;
  int cnt = 0;
  for(int i=0;i<limit && cnt < n;i++)
  {
    if(p[i]) {
      cout << i << " ";
      cnt++;
    }
  }
  cout<<endl;
}
