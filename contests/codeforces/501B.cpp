#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
vector < pair<string, string> > v;
string a[1001];
map<string, string> m;
int main()
{
  int q;
  cin>>q;
  string p,s;
  for(int i=0;i<q;i++)
  {
    cin>>p>>s;
    m.insert(pair<string, string>(p, s));
    // v[i].make_pair(p,q);
    // a[i] = s;
    // cout<<<< " "<<s;
  }
  for (map<string, string>::iterator i = m.begin(); i!=m.end(); *i++)
   {
      if(i->second == )
        printf("%s %0.4lf\n",i->first.s, 100.0*i->second/tot);
   }

}