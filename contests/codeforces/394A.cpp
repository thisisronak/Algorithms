#include<iostream>
#include<cstdio>
#include<cstring>
#include <cmath>
#define MIN(a,b) (a)<(b)?(a):(b)

using namespace std;

int main()
{
	char str[1000];
	cin>>str;
	int n=strlen(str);
	int i,a=0,b=0,c=0;
	for(i=0;str[i]!='+';i++)
		a++;
	for(i++;str[i]!='=';i++)
		b++;
	for(i++;i<n;i++)
		c++;
	if((a+b-c!=-2 && a+b-c!=2 && a+b!=c) || (a==1 && b==1 && c==1))
		cout<<"Impossible";
	else
	{
		if(a+b+2==c)
		{
			a++;
			c--;
		}
		else if(a+b-2==c)
		{
			if(a<b)
			{
				b--;
				c++;
			}
			else
			{
				a--;
				c++;
			}
		}

		for(i=0;i<a;i++)
				cout<<str[0]; //prints the whole string as is
			cout<<'+';
			for(i=0;i<b;i++)
				cout<<str[0];
			cout<<'=';
			for(i=0;i<c;i++)
				cout<<str[0];
	}
	return 0;
}
