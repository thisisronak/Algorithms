#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll MAXVAL = 1000100000;
ll n,m,w ;
vector < ll > a;

void read()
{
	cin>>n>>m>>w;
	a.resize(n);
	for( ll i=0; i<n ;i++) cin>>a[i];
}

bool check ( ll x)
{
	vector <ll> st(n,0);
	ll scurr = 0;
	ll moves = 0;
	for (ll i =0; i<n ; i++)
	{
		scurr = scurr -i -w >=0 ? st[i-w] : 0;
		if( a[i] +scurr <x)
		{
			st[i] = x - a[i] - scurr;
			scurr = scurr + st[i];
			moves = moves + st[i];
		}
		if( moves >m)
			return 0;
	}
	return moves <= m;
}

void solve ()
{
	ll l =1;
	ll r = MAXVAL;
	ll x;
	while(l<=r)
	{
		ll md = (l+r) >> 1;
		if(check (md))
		{
			x = md;
			l = md +1;

		}
		else
			r = md -1;

	}

	cout<< x <<endl;
}

int main()
{
		read();
		solve();
		return 0;
}
