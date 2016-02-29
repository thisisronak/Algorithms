#include<bits/stdc++.h>
using namespace std;

int main()
{
	double n,m;
	double ans =0;
	cin>>m>>n;
	for(int i=1;i<m;i++)
	{
		double k= (double)i;
		ans=ans+pow(k/m,n);
	}
	ans=m-ans;
    cout.precision(8);
    cout<<fixed<<ans<<endl;
	return 0;
}
