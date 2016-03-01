#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int a[10002];

int main()
{
   a[0]=0;
   for(int i=1;i<10000;i++)
   {
      a[i] = i+a[i-1]; 
   }
   int n;
   cin>>n;
   int sum=0;
   for(int i=1;i<10000;i++)
   {
      sum = sum+a[i];
      if(sum==n)
        {cout<<i<<endl; return 0;}
      else if(sum>n)
        {cout<<i-1<<endl; return 0;}

   }

}