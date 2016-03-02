#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

pair<int, int> has[300];

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n , m;
  string s;
  cin>>n>>m>>s;

  for(int i=0;i<s.size();i++){
    has[s[i]-'0'].second = 1;
  }

  for(int q=1;q<=m;q++){
    char a, b;
    cin>>a>>b;
    
    if ( (has[a-'0'].second==1) && (has[b-'0'].second==1) ){
      has[a-'0'].first = b-'0';
      has[b-'0'].first = a-'0';
    }

    else if( (has[a-'0'].second!=1) && (has[b-'0'].second==1) ){
      has[b-'0'].first == a-'0';
      has[b-'0'].second = 0;
      has[a-'0'].first == b-'0';
      has[a-'0'].second =1;
    }
    else if( (has[a-'0'].second==1) && (has[b-'0'].second!=1) ){
      has[b-'0'].first == a-'0';
      has[a-'0'].second = 0;
      has[a-'0'].first == b-'0';
      has[b-'0'].second == 1;
    }
    
  } 

  for(int i=0;i<s.size();i++){

    if(has[s[i]-'0'].first !=0){
      s[i] = (has[s[i]-'0'].first+'0');
    }

  }
  cout<<s<<endl;
}
  