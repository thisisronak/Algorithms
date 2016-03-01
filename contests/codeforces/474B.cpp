#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl
void g(int t){
     if(t){
           g((t-1)/26);
           putchar(65+(t-1)%26);
     }
}
int main(){
  int n,x,y;
  char s[64],*p;
  for(scanf("%d ",&n);n--;){
    gets(s);
    if(sscanf(s,"%*c%d%*c%d",&x,&y)==2){
      g(y);
      printf("%d\n",x);
    }else{
      for(x=0,p=s;*p>64;++p)
        x=x*26+*p-64;
      printf("R%sC%d\n",p,x);
    }
  }
  return 0;
}
int dp[100005];
int a[100005];

int binary(int t, int ind)
{
  // int ind = n/2;
  if(dp[ind]>=t && t>=dp[ind-1])
  {
    return ind;
  }
  else if(dp[ind]>t ) binary(t, ind/2);
  else binary(t,ind+ind/2);
  return ind;
}
int main()
{
  freopen("input.txt","r",stdin);
  int n,m,t;
  cin>>n;
  for(int i=1;i<n;i++)
    {
      cin>>a[i];
      dp[i] = dp[i-1]+ a[i];
    }

    cin>>m;
    while(m--)
    {
      cin>>t;
      cout<<binary(t,n/2)<<endl;
    }


}