#include<iostream>
using namespace std;
int main() 
{
  long long n;
  cin>>n;
  if (n&1)
    cout<<n-9<<" "<<9;
  else
    cout<<n-4<<" "<<4;

  return 0;
}