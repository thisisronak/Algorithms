#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
// vector<vector<long long> >v;

string str;
long long symbl[26];
struct arrr
{
  vector<long long> v;
}arr[26];

long long sumo(long long aa, long long bb)
{
  long long su =0;
  for(aa+=1;aa<bb;aa++)
    su += symbl[str[aa]-'a'];
  return su;
}

int main()
{
  
  for(long long i=0;i<26;i++)
  cin>>symbl[i];
  long long count=0;
  
  cin>>str;
  for(long long i=0;i<str.size();i++)
  {
    long long temp = str[i]-'a';
    arr[temp].v.push_back(i);
  } 

  for(long long i=0;i<25;i++)
  {
    if(arr[i].v.size()>1)
    {
      for(long long j=0;j<arr[i].v.size()-1;j++)
      {
        for(long long k=j+1;k<arr[i].v.size();k++)
        {
          if(sumo(arr[i].v[j],arr[i].v[k])==0) count++;
        }
      }
      
    }
  }
  cout<<count<<endl;

}