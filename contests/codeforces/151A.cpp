#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

int taxi[105];
int pizza[105];
int girl[105];
int i;
void solve(string num)
{
  if(s[0]==s[1] && s[3]==s[4] && s[6]==s[7])
  {
    if(s[0]==s[3] && s[3] ==s[6]&&s[0]==s[6])
      taxi[i]++;
  }

  else if(s[0]>s[1] && s[1]>s[3] && s[3]>s[4] && s[4]>s[6] && s[6]>s[7])
  {
    pizza[i]++;
  }

  else girl[i]++;

  // return num;
}

int main()
{
  freopen("input.txt","r",stdin);
  int n;
  string t,p,g;
  int tm=0,tp=0,tg=0;
  string name;
  cin>>n;
  for( i=0;i<n;i++)
  {
    int m;
    string num;
    cin>>m>>name;
    for(int j=0;j<m;j++)
    {
      cin>>num;
      solve(num;)
    }         

    if(taxi[i]>=tm)
    {
      tg = taxi[i];
      tm = name;
    }
    if(pizza[i]>=tp)
    {
      t = taxi[i];
      tn = name;
    }
    if(girl[i]>=tg)
    {
      tg = taxi[i];
      tn = name;
    }
    
    


  }
}