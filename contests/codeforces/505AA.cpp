#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
  string s;
  char c;
  int i,cnt=0,ind,j;
  cin>>s;
  int l=s.length();
  
  for(i=0,j=l-1;i<=j;i++,j--)
  {
    if(s[i]==s[j])
    {
      i++;
      j--;
      continue;
    }
    else if(s[i]!=s[j] && cnt==0 && s[i+1]==s[j])
    {
      ind=j+1;
      c=s[i];
      cnt=1;
    }
    else if(s[i]!=s[j] && cnt==0 && s[i]==s[j-1])
    {
      ind=i-1;
      c=s[i];
      cnt=1;
    }
    else
    {
      cout<<"NA"<<endl;
      return 0;
    }
  }
  if(cnt=0)
  {
    c='a';
    for(i=0;i<l/2;i++)
    {
      cout<<s[i];
    }
    cout<<c;
    for(i=l/2;i<l;i++)
    {
      cout<<s[i];
    }
    cout<<endl;
  }
  if(ind==-1)
  {
    cout<<c;
  }
  for(i=0;i<l;i++)
  {
    if(ind==i)
    {
      cout<<c;
      i--;
    }
    else
    {
      cout<<s[i];
    }
  }
  if(ind=l)
  {
    cout<<c;
  }
  cout<<endl;
  return 0;
}