#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


//duh this was easy

int main()
{
    map<string,int>room;
    int n;
    cin>>n;
    int res=-1;
    for(int i=0;i<n;i++)
    {
        string row;
        cin>>row;
        room[row]++;
        res=max(res,room[row]);
    }
    cout<<res;
    return 0;
}