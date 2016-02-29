#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,l,r,x,y;
    int aa[1001],bb[1001],count=0;

    cin>>p>>q>>l>>r;

    for (int ct=l;ct<=r;ct++)
     {
        bb[ct]=1;
    }

    for (int ct=1;ct<=p;ct++) {
        scanf("%d %d",&x,&y);
        for (int cx=x;cx<=y;cx++) {
        aa[cx]=1;
        }
    }

    for (int ct=1;ct<=q;ct++)
    {
        cin>>x>>y;
        for (int cx=l;cx<=r;cx++)
         {
            for (int cy=x;cy<=y;cy++)
            {

                if (aa[cx+cy]==1 && bb[cx]==1)
                 {
                    count++;
                    bb[cx]=0;
                }
            }
        }
    }

    cout<<count<<endl;
}
