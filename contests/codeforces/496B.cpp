#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int a[1005];
int mini=10;
long long result(int a, int i)
{
    for(int j=1;j<=1000;j=j*10)
    {
        return (a[(i+n-1)%n]*j)
    }
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++) a[i] = s[i]-'0';
   // sort(a,a+n);
    //for(int i=0;i<n;i++) { s[i] = lexical_cast<string>(a[i]);; d(s[i]);}
    
    for(int i=0;i<n;i++)
    {
       if(mini>a[i]) {mini=a[i];}

    }
    for(int i=0;i<n;i++) { a[i]= a[i] - mini;
        if(a[i]==0) ;//fz=1;
       // d(a[i]);
    }
    int temp = a[3]*1+a[2]*10+a[1]*100+a[0]*1000;
   // d(temp);
    int res=0;
    int ind=0;
    for(int i=0;i<n;i++)
    {
        res = a[(i+3)%n]*1+a[(i+2)%n]*10+a[(i+1)%n]*100+a[(i)%n]*1000;
       // d(res);
        if(temp>=res){temp=res;
         //   d(res);
            ind=i;}
    }

   // int fp=0;
    for(int i=ind;i<n;i++){
       cout<<a[i];
      
    }
    for(int i=0;i<ind;i++){
       cout<<a[i];
      
    }
        cout<<endl;
    // cout<<endl;
}