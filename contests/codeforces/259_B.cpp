#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,x,y,z;
int main()
{
	scanf("%d%d%d%d%d%d%d%d%d",&x,&a,&b,&c,&y,&d,&e,&f,&z);
	x=(e+e+f-a)/2;
	y=x+a+b-c-d;
	z=e+b-x;
	printf("%d %d %d\n%d %d %d\n%d %d %d\n",x,a,b,c,y,d,e,f,z);
	return 0;
}
