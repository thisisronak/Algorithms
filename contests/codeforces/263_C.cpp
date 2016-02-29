#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n],ans=0;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

	sort(a,a+n);

	for(int i=0;i<n-1;i++)
    {   ans+=a[i]*(i+2);
    }
	ans=ans+a[n-1]*n;
	cout<<ans<<endl;
	return 0;
}
