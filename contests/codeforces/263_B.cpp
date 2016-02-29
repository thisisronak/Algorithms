#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, a[26];
    long long ans=0, x=0;
    string s;
	cin>>n>>k>>s;
	for (i=0; i<s.size(); i++) a[s[i]-'A']++;
	sort(a, a+26);
	for (i=25; k>0; i--) {
		x = min(k,a[i]);
		k -= x;
		ans += x*x;
	}
	cout<<ans<<endl;
	return 0;
}
