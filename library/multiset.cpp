#include<ios>
#include<set>
#include<iostream>
using namespace std;

multiset<int> S;
multiset< int > :: iterator fwd, rev;

int main()

{
	long long sum =0;
	int n,p,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		for(int j=0;j<m;j++)
		{
			cin>>p;
			S.insert(p);
		}

		fwd = S.begin();
		rev = S.end();
		//rev--;
        cout<<*fwd<<" "<<*rev; rev--; cout<<" "<<*rev<<endl;
		sum = sum + (*rev - *fwd);
		S.erase(fwd);
		S.erase(rev);
	}
	cout<<sum<<endl;
	return 0;
}

