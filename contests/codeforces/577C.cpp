#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

#define limit 10000009
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
  p[8] = 1, p[27] = 1, p[32]= 1, p[512]=1, p[729]=1, p[1000]=1, p[243] = 1, p[125]=1, p[216] =1,p[343]=1,p[128]=1; 
  int count=0;
  int n;
  cin>>n;
  if(n==1) {
    cout<<"0"<<endl;
    return 0;
  }
  set<int>pp;
  for(int i=2;i<=n;i++){
    if(p[i]) {
      count++;
      pp.insert(i);
    }
  }

  for(int i=2;i<=n;i++){
    if(p[i]){
    int temp = sqrt(i);
    if (temp * temp == i)
    {
      count++;
      pp.insert(i);
    }
  }
  }

  cout<<count<<endl;
  for (std::set<int>::iterator it=pp.begin(); it!=pp.end(); ++it)
    std::cout <<*it<<" ";
} 

