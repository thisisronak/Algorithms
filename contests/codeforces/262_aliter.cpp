#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cstring>
using namespace std;
long long n,m,w;
long long arr[100001];
long long inr[100001];
long long check(long long ans)
{
    memset(inr,0,sizeof(inr));
    long long inc=0;
    long long mm=m;
    for(long long i=0;i<n;i++)
    {
        //cout<<inc<<endl;
        if(arr[i]+inc<ans)
        {
            inr[min(i+w-1,n-1)]=ans-(arr[i]+inc);
            mm=mm-(ans-(arr[i]+inc));
            inc=inc+ans-(arr[i]+inc);

        }
        inc=inc-inr[i];
    }
    if(mm>=0)
        return 1;
    else
        return 0;
}
int main()
{

    cin>>n>>m>>w;

    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long high=1000000000000;
    long long low=1;
    while(high>low+1)
    {
        //cout<<high<<" "<<low<<endl;
        long long mid=(high+low)/2;
        if(check(mid)==1)
            low=mid;
        else
            high=mid-1;
    }
    if(check(high)==1)
        cout<<high<<endl;
    else
        cout<<low<<endl;
    //cout<<check(3)<<endl;

}
