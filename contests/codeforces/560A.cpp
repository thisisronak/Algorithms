#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int one, two, three;
int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);
  int n;
  cin>>n;
  int temp;

  for(int i=0;i<n;i++){
    cin>>temp;
    if (temp == 1) one = 1;
    // if(a[i]==2) two = 1;
    // if (a[i]==3) three = 1;
  } 

  // sort(a,a+n);

  if (one) cout<<"-1"<<endl;
  else cout<<"1"<<endl;

}