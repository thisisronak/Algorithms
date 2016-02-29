#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,dep=0;
	cin>>n>>m;
	dep = n;
	int i=0;
	while(dep>0)
    {
		dep--;
		i++;
		if(i%m==0) dep++;
	}
	cout<<i<<endl;
}
