#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int main()
{
 int k,n;
 cin>>k;
 int a[105];
 a[0]=0;
 a[1]=0;
 a[2]=0;
 int flag=0;
 for(int i=3;i<=100;i++)
 {
   a[i]= ((i-1)*(i-2))/2 +a[i-1];
 }
 for(int i=3;i<=n;i++)
 {
    if(k==a[i]) {cout<<i<<endl;flag=i; break;}

    else if(k>a[i] && k<=a[i+1]){
     flag =i+1;
     cout<<i+1<<endl; break;
    }
 }
 // int arr[flag+1][flag+1];

 for(int i=1;i<=flag;i++)
 {
  for(int j=1;j<=flag;j++)
  {
    if(i!=j){ cout<<"1"<<" ";}
    else { cout<<"0"<<" ";}
  }
  cout<<endl;
 }


}