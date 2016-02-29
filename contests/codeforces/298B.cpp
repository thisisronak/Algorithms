#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl


int t, a,b,c,d,n=0,s=0,e=0,w=0,n1=0,s1=0,e1=0,w1=0;
int main()
{

 // freopen("input.txt","r",stdin);
  
  cin>>t>>a>>b>>c>>d;
  string dir;
  cin>>dir;
  if(c>=a)
  {
    e1 = c-a;
    // d(e1);
  }
   if(c<a)
  {
    w1 = a-c;
    // d(w1);
  }
  if(d>=b)
  {
    n1 = d-b;
    // d(n1);
  }
  if(b>d)
  {
    s1 = b-d;
    // d(s1);
  }
  int flag =-1;


  for(int i=0;i<t;i++)
  {

    if(dir[i]=='N') n++;
    else if(dir[i]=='S')s++;
    else if(dir[i]=='E')e++;
    else w++;

    if(n1<=n && s1<=s && w1<=w && e1<=e)
    {
      flag =i+1;
      break;
    }

  }
  
  cout<<flag<<endl;

}
