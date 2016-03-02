#include <iostream>
#include<bits/stdc++.h>

using namespace std;
vector <int> pp;
vector<int> qq,rr,ss;
deque<int> first;
deque<int> second;

// bool check(){
//   if(pp.size!= rr.size() || qq.size() != ss.size()) return false;
  
// }
int main()
{
  int n;
  int n1,n2;
  first.clear();
  second.clear();
  cin>>n>>n1;
  int fights,tmp,v1,v2;  
  for(fights=0;fights<n1;fights++)
  {
    cin>>tmp;
    first.push_back(tmp);
  }
  cin>>n2;
  for(fights=0;fights<n2;fights++)
  {
    cin>>tmp;
    second.push_back(tmp);
  }

  // int fight =0;
  // int x = 0, y=0;
  // while(fight<250){

  //     if(r[x]>s[y]){
  //       r.push_back(s[y]);
  //       r.push_back(r[x]);
  //       y+=1;
  //       x+=1;
  //       if(y>s.size())
  //       {
  //         cout<<fight<<" "<<"1"<<endl;
  //         return 0;
  //       }
  //       else
  //       {
  //         int flag =0;
  //         for(int i=0;i<p.size();i++){
  //           if(r[x+i]!=p[i]) {
              
  //             flag =1;
  //             break; 
  //           }            
  //         }
  //         for(int i=0;i<q.size();i++){
  //           if(s[y+i]!=q[i]){
  //             flag =1;
  //             break;
  //           }
  //         }

  //         if(flag==0) {
  //           cout<<"-1"<<endl;
  //           return 0;
  //         }
  //       }

  //       fight++;
  //     }

  //     else {
  //       s.push_back(r[x]);
  //       s.push_back(s[y]);
  //       x+=1;
  //       y+=1;
  //       if(x>r.size())
  //       {
  //         cout<<fight<<" "<<"2"<<endl;
  //         return 0;
  //       }
  //       else
  //       {
  //         int flag =0;
  //         for(int i=0;i<p.size();i++){
  //           if(r[x+i]!=p[i]) {
              
  //             flag =1;
  //             break; 
  //           }            
  //         }
  //         for(int i=0;i<q.size();i++){
  //           if(s[y+i]!=q[i]){
  //             flag =1;
  //             break;
  //           }
  //         }

  //         if(flag==0) {
  //           cout<<"-1"<<endl;
  //           return 0;
  //         }
  //       }

  //       fight++;
  //     }
  //   }
  for(fights=1;fights<=5000;fights++)
  {
    v1=first.at(0);
    v2=second.at(0);
    first.pop_front();
    second.pop_front();
    if(v1>v2)
    {
      first.push_back(v2);
      first.push_back(v1);
    }
    else
    {
      second.push_back(v1);
      second.push_back(v2);
    }
    if(first.empty())
    {
      cout<<fights<<" "<<2<<endl;
      return 0;
    }
    if(second.empty())
    {
      cout<<fights<<" "<<1<<endl;
      return 0;
    }
  }
  if(fights>5000) cout<<"-1"<<endl;
}