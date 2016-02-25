#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

#define limit 1e7+7
vector <int > p(limit,1);

void gen() // used to generate the primes below 10^7
{
//  memset(p,0,sizeof(p));
  p[0]=p[1]=0,p[2]=1;
  
  for(int i=2 ; i * i <=limit; i++)
  {
    if(p[i])
    {   
          for(int j=i+i;j<=limit;j+=i)
          p[j]=0;
    }
  }
}

int main()
{
  gen();
  int count=0;
  for(int i=1;i<=limit;i++)
  {
    if(p[i]) count++;

  }
  cout<<count<<endl;
} 