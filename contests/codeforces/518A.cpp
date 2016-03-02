#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

string s, t;
int main()
{
    cin>>s>>t;
    int n=s.size()-1;
    while(s[n] == 'z') s[n--] = 'a';
    s[n]++;
    if(s<t) 
      cout << s;
    else
     cout<<"No such string";
}