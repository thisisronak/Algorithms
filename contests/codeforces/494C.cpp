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
  string s;
  cin>>s;
  int count=0,hash=0;
  vector<int> a;
  bool flag=true;
  for(unsigned int i=0;i<s.size()&&flag;i++)
  {
    if(s[i]=='(')count++;
    else if(s[i]==')')count--;
    else
    {
      hash++;
      if(count<=0)flag=false;
    }
    if(count<0)flag=false;
  }
  int ccc=0;
  for(unsigned int i=s.size()-1;s[i]!='#';i--)
  {
    if(s[i]=='(')ccc++;
    else ccc--;
    if(ccc>0)flag=false;
  }
  if(!flag||count<hash)
  {
    cout<<"-1"<<endl;
    return 0;
  }
  for(int i=1;i<hash;i++) 
  {
    cout<<1<<endl;
    count--;
  }
  cout<<count<<endl;
  return 0;
}