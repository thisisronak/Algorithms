#include<bits/stdc++.h>
using namespace std;
int a[100000];
 map < int , int > hash;
int main()
{
    int n;long long count=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        hash[a[i]]++;

    }

    for(int i=-10;i<0;i++)
    {
        if (hash[abs(i)] && hash[i] )
        {
            count = count+hash[abs(i)];
        }
    }
    count = count + (hash[0] * (hash[0]-1)) / 2;
    cout<<count<<endl;
}
