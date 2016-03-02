#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int key[256];
int door[256];
int main()
{
    int n;
    cin>>n;
    long long count=0;
    string s;
    cin>>s;
    // cout<<s<<endl;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
      if( (i%2) ==0)
      {
        key[s[i]-'a']++;
       
      }
      
      else
      {
        if(key[s[i]-'A']==0) count++;
        else key[s[i]-'A']--;
      }
      
    }
    cout<<count<<endl;
}