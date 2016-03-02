#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cstring>
using namespace std;
int prevo[1000000],arr[1000000],ans[1000000],brr[1000000],prevo1[1000000];
int mans[1000000];
int main()
{
    int n,mini=1000000001;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mini=min(mini,arr[i]);
        brr[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        prevo[i]=i-1;
        int j=i;
        while(j>-1 && arr[j]>=arr[i])
        {
            j=prevo[j];
        }
        prevo[i]=j;
    }
    reverse(brr,brr+n);
    for(int i=0;i<n;i++)
    {
        prevo1[i]=i-1;
        int j=i;
        while(j>-1 && brr[j]>=brr[i])
        {
            j=prevo1[j];
        }
        prevo1[i]=j;
        //cout<<prevo1[i]<<endl;
    }
    reverse(prevo1,prevo1+n);
    for(int i=0;i<n;i++)
    {
      if(prevo1[i]==-1)
        prevo1[i]=n;
      else
      prevo1[i]=n-1-prevo1[i];
    }
      
    for(int i=1;i<=n;i++)
    ans[i]=mini;
    for(int i=0;i<n;i++)
    {
        ans[prevo1[i]-prevo[i]-1]=max(ans[prevo1[i]-prevo[i]-1],arr[i]);
    }
    int val=mini;
    for(int i=n;i>=1;i--)
    {
        val=max(val,ans[i]);
        mans[i]=val;
        
    }
    for(int i=1;i<=n;i++)
      printf("%d ",mans[i]);
    printf("\n");
    return 0;
}