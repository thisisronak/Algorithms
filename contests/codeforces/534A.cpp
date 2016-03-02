#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
#define limit 10000009

int a[5005];
int main()
{
  int n;
  cin>>n;
  // for(int i=0;i<n;i++) cin>>a[i];
  if(n==2) cout<<"1\n1"<<endl;
  else if(n==3) cout<<"2\n1 3"<<endl;
  else if(n==4) cout<<"4\n3 1 4 2"<<endl;
  else{

    cout<<n<<endl;

    for(int i=1;i<=n;i++)
    {
      if(i%2!=0) cout<<i<<" ";

    }
    for(int i=1;i<=n;i++)
    {
      if(i%2==0) cout<<i<<" ";

    }
    cout<<endl;
  } 

}