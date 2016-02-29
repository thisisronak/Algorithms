#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl
int main()
{ 
    freopen("input.txt","r",stdin);`
    int n,c=0,nn;

    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>nn;
        if(nn==4){c++; continue;}
        else v.push_back(nn);                                
    }
    
    int c1=0,c2=0,c3=0;
    c1=count(v.begin(),v.end(),1);
    c2=count(v.begin(),v.end(),2);
    c3=count(v.begin(),v.end(),3);
     
    if(c3==c1 || c3>c1)
    {
      c+=c3;
      if(c2%2==0)
        c+=c2/2;
      else
         c+=(c2+1)/2;            
    } 
    else 
    {
        c+=c3;
        c1-=c3;
        if(c2>c1)
        {
           if(c2%2==0)
           {
              c+=c2/2;
              if(c1%4==0)
              {
                c+=c1/4;           
              }         
              else
              {
                if(c1%4==1)                                    
                { c1+=3;  c+=c1/4; } 
                else if(c1%4==1)                                    
                { c1+=1;  c+=c1/4; }    
                else
                {
                    c1+=2;  c+=c1/4; 
                }
              }
           } 
           else
           {   
               c2++;
               c+=c2/2;
               if(c1>2)
               {
                  c1-=2;     
                  if(c1%4==0)
              {
                c+=c1/4;           
              }         
              else
              {
                if(c1%4==1)                                    
                { c1+=3;  c+=c1/4; } 
                else if(c1%4==3)                                    
                { c1+=1;  c+=c1/4; }  
                else
               { c1+=2;  c+=c1/4; }  
              }      
               }    
           }                   
        }    
        else
        {
            if(c2%2==0)
            {
               c+=c2/2;
               if(c1%4!=0){
                 if(c1%4==1)          
                   c1+=3;
                 else if(c1%4==3)
                    c1++;  
                 else
                    c1+=2;                   
                 }                 
               c+=c1/4;                          
            }
            else
            {
                c2++; c+=c2/2;
                c1-=2;
                 if(c1%4!=0){
                 if(c1%4==1)          
                   c1+=3;
                 else if(c1%4==3)
                    c1++;  
                 else
                     c1+=2;   
                 }
                c+=c1/4; 
            }   
        }
    }
     
    cout<<c<<endl;
   }