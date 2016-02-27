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
 string s; long long sum=0;
 cin>>s;
 long long lenght = s.length();
 for(long long i=0;i<lenght;i++)
 {
    if(s[i]=='4' || s[i]=='7') sum++;
 } 
 // d(sum);
 if(sum==0) {cout<<"NO"<<endl; return 0;}
 while(sum!=0)
 {
    if((sum-4)%10==0)
    {
      sum = (sum -4)/10;
    }
    else if( (sum-7)%10==0)
{
  sum = (sum-7)/10; 
}
  else
  {
    cout<<"NO"<<endl; return 0;
  }

 }
 if(sum==0) {cout<<"YES"<<endl; return 0;}
 
}