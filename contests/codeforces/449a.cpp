#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  while(1){
    int n,m,i,iter=0,maxi=0,maxit=-99999;
    cin>>n>>m;
    int a[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];
        iter = a[i]-m;

        if(iter>=maxit && iter)
        {
            maxit=iter;
            maxi =i+1;
        }
    }
   /* i=0;
    int flag =0;
    while(iter)
    {
        if(a[i]<=0)
        {
            (i++)%n;
        }
        else if(m-a[i]>=0)
        {
            a[i]=0;
            flag =i;
            (i++)%n;

        }
        else{
            a[i] = a[i]-m;
            flag=i;
            (i++)%n;
        }


    }*/
    cout<<maxi<<endl;
    //}
}
