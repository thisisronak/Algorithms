#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
 int a[11];
int main()
{
  string s;
  cin>>s;
  int len = s.size();
  for(int i=0;i<len;i++)
  {
    if(a[s[i]-'0']==0)
    {
      a[s[i]-'0']=i;
    }
  }
  // cout<<a[4]<<endl;
  if(a[2]==0 && a[4]==0 && a[6]==0 && a[8] ==0 && a[0]==0) {cout<<"-1"<<endl; return 0;}
   if(a[2]==0 && a[4]==0 && a[6]==0 && a[8] ==0 && a[0]==0 && s[0])
  
  int last = s[len-1]-'0';
  char temp;
  int swapper=0;
  if(a[last-9] && (last-9)>0 ){swapper = a[last-9];}
  else if(a[last-7]&& (last-7)>0){swapper = a[last-7];}
  else if(a[last-5]&& (last-5)>0){swapper = a[last-5];}
  else if(a[last-3]&& (last-3)>0){swapper = a[last-3];}
  else if(a[last-1]&& (last-1)>0){swapper = a[last-1];}

  if(swapper)
  {
    temp = s[swapper];
    s[swapper] = s[len-1];
    s[len-1] =temp;
    // s[a[last-1]] = s[len-1];
    // s[len-1] = last+'0';
   }
   else 
   {
    for(int i=len-2;i>=0;i--)
    {
      if( (s[i]-'0')%2==0 ) 
      {
        swapper = i;
        temp = s[swapper];
        s[swapper] = s[len-1];
        s[len-1] =temp;
      }
    }
   }
   // cout<<"here"<<endl;
   cout<<s<<endl;
   return 0;
}