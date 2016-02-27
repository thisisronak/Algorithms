#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int n , m;
int lef , rig , a , b;
string s[51];

int main()
{
    ios::sync_with_stdio(false);
    while(cin>>n>>m)
    {
        lef = 100 , rig = -1 , a = 100 , b = -1;
        for(int i = 1 ; i <= n ; i++)
        {
            cin>>s[i];
            s[i] = " " + s[i];
            for(int j = 1 ; j <= m ; j++)
                if(s[i][j] == '*')
                {
                    lef = min(lef , j);
                    rig = max(rig , j);
                    a = min(a , i);
                    b = max(b , i);
                }
        }
        for(int i = a ; i <= b ; i++)
        {
            for(int j = lef ; j <= rig ; j++)
                cout<<s[i][j];
            cout<<endl;
        }
        
    }
    return 0;
}