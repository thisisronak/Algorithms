#include <bits/stdc++.h>

using namespace std;

struct Info
{
  char name[12];
  int p,h;
}v[3333];

int n;
int id[5555];

bool cmp(const Info &a,const Info &b){
  return a.p<b.p; 
}

int main()
{
  freopen("input.txt","r",stdin);
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%s%d",v[i].name,&v[i].p);
  sort(v,v+n,cmp);
  
  memset(id,0,sizeof (id) );
  for(int i=n-1;i>=0;i--)
  {
    int x = (i-v[i].p)+1;
    int p=1;
    if(x<=0)
    {
      printf("-1\n");
      return 0;
    }
    while(x||id[p])
    {
      if( !id[p] )
        x--;
      if( !x ) 
        break;
      p++;
    }
    
    id[p]=1;
    v[i].h=p;
  
  }
  for(int i=0;i<n;i++)
  {
    printf("%s %d\n",v[i].name,v[i].h);
  }

  return 0;
} 