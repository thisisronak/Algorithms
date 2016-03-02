#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int a[10000];
vector <int>v;

int main()
{
    int n;
    cin>>n;
    int tmp;
    for(int i=1;i<=n;i++) {
      cin>>tmp;
      a[tmp]++;
    }

    // for(int i=1;i<=3000;i++) if(a[i]>=1) cout<<a[i]<<" ";
    // cout<<endl;

    long long count =0;
    // cout<<count<<endl;

    for(int i=1;i<=6010;i++) {
      if( a[i] > 1){
        
        for(int j=i+1;j<=6010;j++){
           
           if(a[j]==0){
            count += (j-i);
            a[i]--;
            // cout<<count<<" ";
            a[j]=1;
            if(a[i]==1) break;  
          }
        }
      }
    }

    cout<<count<<endl;

    
}