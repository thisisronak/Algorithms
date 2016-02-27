#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
int s[100005];
int rem;
int sum(int i)
{
  if(s[i]) return s[i];
  else
  {
    rem = i%10;
    s[i]= s[i]+rem+sum(i/10);
  }
  return s[i];
}
int has[9]={1,2,3,4,5,6,7,8,9};

int main()
{
  long long n;
  cin>>n;
  s[0]=0;
  for(int i=1,j=0;i<=100000;i++,j++)
  {

    s[i]=has[j];
    if(j==8)j=-1;

     // cout<<s[i]<<" ";
  }
  // cout<<endl;
  long long tema;
  long long temb,temc;
  double temp,kemp;
  bool flag=0;
  for(int i=1;i<10;i++)
  {
    temp = sqrt(i*i+4*n);
    kemp=ceil(temp);
    if(kemp==temp)
    {
      flag=1;
    }

  }
  for(int i=1;i<=100000;i++)
  {
    tema=i*2;
    temb= -s[i]-sqrt(s[i]*s[i]+4*n);
    temc= -s[i]+sqrt(s[i]*s[i]+4*n);

    if(tema==temb || tema==temc)
    { cout<<i<<endl;
      return 0;
    }
  }
  cout<<"-1"<<endl;
  return 0;

}