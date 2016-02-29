#include<iostream>
using namespace std;
int a[10]={0};
int solve()
{
    int k=0;
    for(int i=1;i<=9;i++)
    {
        if(a[i]>=4)
        {
            k=1;
            break;
        }

    }
    if(k==0)
        return 0;
    else
    {
        for(int i=1;i<=8;i++)
            for(int j=i+1;j<=9;j++)
           {
              if(a[i]==1&&a[j]==1)
              {
                  if(i==j)
                    return 2;
                  else
                    return 3;

              }
           }

         for(int i=1;i<=9;i++)
         {
             if(a[i]==2)
                return 2;
             if(a[i]==6)
                return 2;
         }

    }
}
int main()
{
    int k;
    for(int i=1;i<=6;i++)
    {
        cin>>k;
        a[k]+=1;
    }
    if (solve()==0)
        cout<<"Alien";
    else  if(solve()==2)
      cout<<"Elephant" ;
    else if(solve()==3)
        cout<<"Bear";
}
