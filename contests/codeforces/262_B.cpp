#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int x = 81;
	int a, b, c;
	cin >> a >> b >> c;
	vector<long long int> ans;
	int i = 1;
	while(i<=81)
	{
		long long int y;
		y = b*pow(i, a)+c;
		long long int num = y;
		int cl = 0;
		while(num>0)
		{
			int r = num%10;
			cl = cl+r;
			num = num/10;
		}
		if(cl == i)
			ans.push_back(y);
		i++;
	}
	cout << ans.size() << endl;
	sort(ans.begin(), ans.end());
	if(ans.size()!=0)
	{
		for(int i=0;i<ans.size();i++)
		{
			if(i!=ans.size()-1)
				cout << ans[i] << " ";
			else
				cout << ans[i] << endl;
		}
	}
	return 0;
}
