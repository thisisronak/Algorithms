#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,sum=0,i;
	cin>>n;
	long long int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	b[0]=-a[0];
	for(i=0;i<n-1;i++)
	{
		b[i+1]=a[i]-a[i+1];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+b[i];
	}
	if(sum>=0)
    {
        cout<<"0"<<endl;
    }
	else
	{
		sum=-sum;
		cout<<sum<<endl;
	}
	return 0;
}
