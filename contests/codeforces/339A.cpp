#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int main()
{
  int a=0, b=0, c=0;
  string s;
  cin>>s;
  if (s.size()==1) {
    cout<<s<<endl;
    return 0;
  }

  for(int i=0;i<s.size();i++){
    if (s[i]-'0'==1)a++;
    else if(s[i]-'0'==2)b++;
    else if(s[i]-'0'==3)c++;
  }
  int count = a+b+c-1;
  while(a--){
    cout<<"1";
    if(count>0){cout<<"+"; count--;}
  }
  while(b--){
    cout<<"2";
    if(count>0){cout<<"+"; count--;}
  }
  while(c--){
    cout<<"3";
    if(count>0){cout<<"+"; count--;}
  }
}