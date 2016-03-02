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
  // int count=0;
  

  int k;
  int mid;
  cin>>k;
  if(k==3||k==5) {
    cout<<"1"<<endl<<k<<endl;
    return 0;
  }
  mid = k/2;
  // int ans =0;
  vector<int>v;
  if(k<=1e7+1){
    for(int i=mid;i<=k;i++){
      if(p[i]) {
        v.push_back(i);
        k = k-i;
        break;
      }
    }

    for(int i=2;i<=k;i++){
      if(p[i]==1 && p[k-i]==1){
        v.push_back(i);
        v.push_back(k-i);
        // cout<<"fuck it baby"<<endl;
        break;
      }
      else{
        continue;
      }
    }

  cout<<"3"<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}

else{

    // cout<<"lol"<<endl;
    for(int i=k,j=3;;j+=2){
      
      if(p[j]==1){
        int temp = j*j;
        int m = k - temp;
        int count = 0;

        for(int i=3;i<=sqrt(m);i+=2){
          if(m%i==0) {
            count++;
            break;
          }
        }
        if(count==0)
        {
          cout<<"3"<<endl<<m<<" "<<j<<" "<<j<<endl;
          return 0;
        }
      }
    }

}


} 