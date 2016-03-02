#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

vector <int> p;
vector<int> q,r,s;

bool check(){

  if(p.size!= r.size() || q.size() != s.size()) return false;
  else {
    for(int i=0;i<p.size();i++){

    }
  }
}
int main()
{
  int n;
  int a, b;
  cin>>n;
  cin>>a;
  int tmp;
  for(int i=0;i<a;i++){
    cin>>tmp;
    p.push_back(tmp);
    r.push_back(tmp);
  }
  cin>>b;
  for(int i=0;i<b;i++){
    cin>>tmp;
    q.push_back(tmp);
    s.push_back(tmp);
  }

  int fight =0;
  int x = 0, y=0;
  while(fight<250){

      if(r[x]>s[y]){
        r.push_back(s[y]);
        r.push_back(r[x]);
        y+=1;
        x+=1;
        if(y>s.size())
        {
          cout<<fight<<" "<<"1"<<endl;
          return 0;
        }
        else
        {
          int flag =0;
          for(int i=0;i<p.size();i++){
            if(r[x+i]!=p[i]) {
              
              flag =1;
              break; 
            }            
          }
          for(int i=0;i<q.size();i++){
            if(s[y+i]!=q[i]){
              flag =1;
              break;
            }
          }

          if(flag==0) {
            cout<<"-1"<<endl;
            return 0;
          }
        }

        fight++;
      }

      else {
        s.push_back(r[x]);
        s.push_back(s[y]);
        x+=1;
        y+=1;
        if(x>r.size())
        {
          cout<<fight<<" "<<"2"<<endl;
          return 0;
        }
        else
        {
          int flag =0;
          for(int i=0;i<p.size();i++){
            if(r[x+i]!=p[i]) {
              
              flag =1;
              break; 
            }            
          }
          for(int i=0;i<q.size();i++){
            if(s[y+i]!=q[i]){
              flag =1;
              break;
            }
          }

          if(flag==0) {
            cout<<"-1"<<endl;
            return 0;
          }
        }

        fight++;
      }
    }
  // }cout<<fight<<endl;
}