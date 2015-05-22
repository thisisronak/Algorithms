/*
// function p recursively generates numbers 
// containing equal number of 4 and 7 
// n is the reqd number of digits
*/
#include <iostream>
using namespace std;
long long n,s;
void p(long long x,int a7,int a4)
{
  if ( x>=n&&a7+1==a4&&(x<s||!s))s=x; 
  if ( x<n*100 )
  {
    p(x*10+4,a7,a4+1);
    p(x*10+7,a7+1,a4);
  }
}
int main()
{
  cin>>n;
  p(0,0,0);
  if ( n==0 )  s=47; 
  cout<<s<<endl;
}
        