#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int pre[1200];
int main(){
    string s;
    cin>>s;
    bool flag = false;
    pre[0] = 1;
    int ans = 8;
    for(int i=1;i<=125;i++){
      ans = 8* i;
      pre[ans] = 1;
    }

    for(int i=0;i<s.size();i++){
      if( (s[i]-'0') == 8){
        flag = true;
        cout<<"YES"<<endl<<8;
        return 0;

      }
      if( (s[i]-'0')==0){
        flag = true;
        cout<<"YES"<<endl<<0;
        return 0;
      }

      for(int j=i+1;j<s.size();j++){
         int tempa = (s[i]-'0')*10+(s[j]-'0');
          if(pre[tempa]){
            cout<<"YES"<<endl<<tempa;
            return 0;
          }
        for(int k=j+1;k<s.size();k++){

          int temp = (s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
          if(pre[temp]){
            cout<<"YES"<<endl<<temp;
            return 0;
          }

        }
      }
    }

    cout<<"NO"<<endl;
}   

