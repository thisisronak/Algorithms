#include<iostream>
using namespace std;
int a[2001];
int t[2001];
int main()
{
    int n, count =0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        t[a[i]]++;
    }

    int flag =0;
    for(int i=0;i<2001;i++)
    {
        if(count>=4)

        {
            flag=1;
            break;
        }
        if(t[i]>=2)
        {
            count=+2;
        }
    }
    if(flag ==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    else{

        sort(t, t+2001)
        for(int i=1,cn=1;cn<=3;i++)
        {

        }
    }

}
