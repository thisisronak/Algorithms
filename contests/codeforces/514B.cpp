#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
double m;
// double r[10005];
int main()
{
  double n;
  double x, y, temp;
  long long a=0, b=0, count=0;
  cin>>n>>x>>y;
  for(double i=1,j=0;i<=n;i++)
  {
    double p,q;
    cin>>p>>q;
    if(p==x && q!=y) a=1;
    else if(p!=x && q==y) b=1;
    else
    { 
      double flag=0;
      temp = (q-y)/(p-x); cout<<temp<<" ";
      // m.push_back(temp);
      if(temp>0)
      {
        // if(!binary_search(m.begin(),m.end(),temp)){m[j]=temp;count++;j++;}
        for(double k=0;k<n;k++)
        {
          if(m[k]==temp)
            
           { break; flag=1;}
         
        }
        if(!flag)
          {m[j]=temp;count++;j++;}
        

      }
      
      else if(temp<0)
       {
        // if(!binary_search(m.begin(),m.end(),temp+31000)) {m[j]=temp+31000;count++;j++;}
        for(double k=0;k<n;k++)
        {
          if(m[k]==temp+31000.00)
            
           { break; flag=1;}
         
        }
        if(!flag)
          {m[j]=temp+31000.00;count++;j++;}
        
       }

    }
  } 

  count +=a+b;
  cout<<count<<endl;
}