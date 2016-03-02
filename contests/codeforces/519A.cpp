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
  int a =0, b=0,count=8;
  while(count--)
  {
    string s;
    cin>>s;
    for(int i=0;i<8;i++)
    {
      if(s[i]=='.');
      else if(s[i]=='Q') a+=9;
      else if(s[i]=='q') b+=9;
      else if(s[i]=='R')a+=5;
      else if(s[i]=='r')b+=5;
      else if(s[i]=='B')a+=3;
      else if(s[i]=='b')b+=3;
      else if(s[i]=='N')a+=3;
      else if(s[i]=='n')b+=3;
      else if(s[i]=='P')a+=1;
      else if(s[i]=='p')b+=1;
      else if(s[i]=='K')a+=0;
      else if(s[i]=='k')b+=0;


    }
    
  }
  if(a>b)cout<<"White"<<endl;
    else if(b>a)cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;

  
}