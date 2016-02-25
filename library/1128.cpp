# include <stdio.h>

# define MAX 7163

struct Heap{                    /* v[i] : value of i-th element of data */
  int v[MAX+1],p[MAX+1];        /* p[i] : position of i in a[] */
  int a[MAX+1],h;               /* a[i] : index array, index of i-th element of heap */

  void siftdown(int i)
  {
    int l,r,largest,t;
    while(1){
      l=2*i;
      r=2*i+1;
      if(l<=h && v[a[l]]>v[a[i]]) largest=l;
      else largest=i;
      if(r<=h && v[a[r]]>v[a[largest]]) largest=r;
      if(i==largest) break;
      t=a[i];
      a[i]=a[largest];
      a[largest]=t;
      p[a[largest]]=largest;
      p[a[i]]=i;
      i=largest;
    }
  }

  void siftup(int i)
  {
    int t;
    while(i>1 && v[a[i]]>v[a[i/2]]){
      t=a[i];
      a[i]=a[i/2];
      a[i/2]=t;
      p[a[i]]=i;
      p[a[i/2]]=i/2;
      i/=2;
    }
  }

  int extractmax(void)
  {
    int maxindex=a[1];
    a[1]=a[h--];
    p[a[1]]=1;
    siftdown(1);
    return maxindex;
  }

  void insert(int i)
  {
    a[++h]=i;
    p[i]=h;
    siftup(h);
  }

  void delet(int i)
  {
    i=p[i];
    a[i]=a[h--];
    p[a[i]]=i;
    siftdown(i);
    siftup(i);
  }

  void increase(int i)
  {
    siftup(p[i]);
  }

  void decrease(int i)
  {
    siftdown(p[i]);
  }

};

Heap t1,t2;

int n,d[MAX+1],c[MAX+1][4],t[MAX+1];

int main(void)
{
  int i,j,k,itrcnt=0;

# ifndef ONLINE_JUDGE
  freopen("1128.in","r",stdin);
# endif

  scanf("%d",&n);
  t1.h=t2.h=0;
  for(i=1;i<=n;i++){
    scanf("%d",&d[i]);
    t1.v[i]=d[i];
    t2.v[i]=0;
    t[i]=0;
    for(j=1;j<=d[i];j++) scanf("%d",&c[i][j]);
    t1.insert(i);
  }
  while(itrcnt<3*n){
    itrcnt++;
    i=t1.extractmax();
    if(t1.v[i]>1){
	  t[i]=1;
	  for(j=1;j<=d[i];j++){
		k=c[i][j];
		if(t[k]==0){
		  t1.v[k]--;
		  t1.decrease(k);
		}
		else{
		  t2.v[k]++;
		  t2.increase(k);
		}
	  }
	  for(k=0,j=1;j<=d[i];j++)
		if(t[c[i][j]]==1) k++;
	  t2.v[i]=k;
	  t2.insert(i);
	  continue;
	}
	else if(t2.h==0) break;
	i=t2.extractmax();
	if(t2.v[i]>1){
	  t[i]=0;
	  for(j=1;j<=d[i];j++){
		k=c[i][j];
		if(t[k]==1){
		  t2.v[k]--;
		  t2.decrease(k);
		}
		else{
		  t1.v[k]++;
		  t1.increase(k);
		}
	  }
	  for(k=0,j=1;j<=d[i];j++)
        if(t[c[i][j]]==0) k++;
      t1.v[i]=k;
      t1.insert(i);
      continue;
    }
    break;
  }
  if(itrcnt>3*n) printf("NO SOLUTION\n");
  else{
    j=0;
    for(k=0,i=1;i<=n;i++) k+=!t[i];
    if(k>n-k || (k==n-k && t[1]==1)){
      j=1;
      k=n-k;
    }
    printf("%d\n",k);
    for(i=1;i<=n;i++)
      if(t[i]==j){
        k--;
        printf("%d%s",i,k? " ":"\n");
      }
  }
  return 0;
}
