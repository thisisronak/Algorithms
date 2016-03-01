#include<bits/stdc++.h>
using namespace std;
//long long a[300005];
//map<long long ,int> m;

pair <long long, int> temp[300005];

bool comp (pair <long long, int>a, pair <long long, int>b)
{
  if (a.second>b.second) return false;
  return true;
}

int main()
{
  //freopen("input.txt","r",stdin);
  int n; 
  long long a;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a;
    temp[i].first = a;
    temp[i].second =i;
    
    //temp[a[i]] = 1;
  }
  sort( temp+1,temp+n+1);
  long long in = temp[1].first;
  for(int i=1;i<=n;i++)
  {
    if(temp[i].first>in)
     { in = temp[i].first;
        in++;
     }
    else 
      {
        temp[i].first = in;
        in++;
      }
  }

  sort(temp+1, temp+n+1, comp);
  for(int i =1;i<=n;i++)
  {
    cout<<temp[i].first<<" ";
  }
}