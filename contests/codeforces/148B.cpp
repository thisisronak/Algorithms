#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int main()
{
  float vp,vd,f,c,t,x=0;
  int num=0;
  cin>>vp>>vd>>t>>f>>c;
  if(vd<=vp)
  {
    cout<<0<<endl;
    return 0;
  }
  while(1)
  {
    x+=t*vp + (vp*vp*t)/(vd-vp);
    if(x<c)
      num++;
    else
      break;
    t=f + 2*x/vd;
  }
  cout<<num<<endl;
  return 0;
}
