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
  int n;
  cin>>n;
  int a[n], b[n];
  int x=0,y=0,temp=0,suma=0,sumb=0;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    if(temp>=0) {
      a[x]=temp;
      suma= suma+temp;
      x++;
    }
    else{
      b[y]=abs(temp);y++;
      sumb= sumb+abs(temp);
    }

  }
  if(suma>sumb){cout<<"first"<<endl;}
  else if(sumb>suma){cout<<"second"<<endl;}
  else 
  { suma =0, sumb=0;
    for(int i=x-1,j=0;i>=0;i--,j++)
    {
      suma = suma+pow(10,i)*a[j];
    }
    for(int i=y-1,j=0;i>=0;i--,j++)
    {
      sumb = sumb + pow(10,i)*b[j];
    }
    for(int i=0,j=0;i<min(x,y);i++,j++)
    {
      if(a[i]>b[i]) {cout<<"first"<<endl;return 0;}
      else if(a[i]<b[i]){cout<<"second"<<endl;return 0;}
      else continue;
    }
 
   
    if(x>y){cout<<"first"<<endl;}
    else {cout<<"second"<<endl;}
  

    
 
  }
}