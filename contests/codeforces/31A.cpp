
 #include <iostream>
using namespace std;
int main()
{
  int a[5],i,n,f=0;
  string s;
  cin>>a[1]>>a[2]>>a[3]>>a[4];
  cin>>s;
  for(i=0;i<s.length();i++)
  {
  n=int(s[i]-'0');
  f=f+a[n];
  }
  cout<<f<<endl;

return 0;
}