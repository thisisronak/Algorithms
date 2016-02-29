#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int arr[100005];
int main()
{
    int n,k,res=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n && k>0;i++)
    {
     if(arr[i]<0){arr[i]*=-1;k--;}
     else
     {
         break;
     }
    }
    int min=100000;
    for(int i=0;i<n;i++){res+=arr[i];if(min>arr[i])min=arr[i];}
    printf("%d\n",res-2*(k%2)*min);
    return 0;
}