
#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
  int n,i,j,ctr;
  char s[30000][21],c;
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%s",s[i]);
  ctr=0;
  for(i=0;s[0][i];i++)
  {
    c=s[0][i];
    for(j=1;j<n && s[j][i]==c;j++);
    if(j<n) break;
    ctr++;
  }
  printf("%d\n",ctr);
  return 0;
}