#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
#define MAXINT 999999999
int n, m, k;
char a[100005];

int main()
{   
 
    cin>>a;

    int t = a[n-1]-48;
    int ii = MAXINT;
    n = strlen(a);
    int c = 0;

    for(int i = 0; i < n; i++)
    {
        int tmp=a[i]-48;

        if(tmp%2==0)
            c++;
        if(tmp%2==0 && tmp<t && i<ii)
            ii = i;
    }
    if(c==0)
    {
        cout<<"-1"<<endl;
    }
    
    else
    {
        if(ii!=MAXINT){
            int tmp = a[ii];
            a[ii]=a[n-1];
            a[n-1]=tmp;
            cout<<a<<endl;
        }
        else
    {
            int asdf = n-1;
            int temp = 0;
            while(1)
            {
                if(a[asdf]%2==0){
                    temp=asdf;
                    break;
                   }
                  asdf--;
            }
            int tmp = a[temp];
            a[temp]=a[n-1];
            a[n-1]=tmp;
            cout<<a<<endl;
        }
    }
 
}