#include <bits/stdc++.h>
using namespace std;
//#define d(n) cout<<#n<<" "<<n<<endl
/*bool comp(long long a, long long b)
{
  if(a>b) return true;
  else return false;
}*/
int main()
{
   freopen("input.txt","r",stdin);
  long long a,b,c;
  long long res=0;
  long long arr[10];
    
  for(int i=0;i<3;i++) cin>>arr[i];
  long long n = 3;
  sort(arr , arr+n);
  a = arr[0]; b= arr[1]-arr[0], c = arr[2]-arr[0];
 // d(a), d(b), d(c);
/*cin>>a>>b>>c;

  x = a,y=b,z =c;
  mi = min(c,min(a,b));
  ma = max(c,max(a,b));

  x = a-mi;
  y = b-mi;
  z = c-mi;*/
  res = res + a; //d(res);
  a = b+c;

  if(a%3==0){a = a/3; }//d(a);}
  else if(a<3)
  {
    a =0;
  }
  else
  {
      a = a/3;
  }
  res = res +min(a,b);// d(res);
  cout<<res<<endl;
}

