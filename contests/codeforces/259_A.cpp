#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    for(int i=0;i<n;i++)
    {
        if(flag==1)
            break;
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i;j<n;j++)
                {
                    if ( (a[i]<a[j] && b[i]>b[j]) || (a[i]>a[j] && b[i]<b[j]) )
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
    }

    if(flag)
    {
        cout<<"Happy Alex"<<endl;

    }
    else cout<<"Poor Alex"<<endl;

}
