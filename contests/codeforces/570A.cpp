#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

int has[200];
int p[200];

int main()
{
    int n, m;
    int maxim =-1;
    int temp, ind;
    cin>>n>>m;
    for(int k=0;k<m;k++){
      for(int i=0;i<n;i++){
        
        cin>>temp;
        if(maxim <temp){
          maxim = temp;
          ind = i+1;
        }

      }

      temp = 0; maxim = -1;
      has[ind]++;
    }

    maxim =0;
    for(int i=0;i<101;i++){
      if (maxim<has[i]){
        maxim = has[i];
        ind = i;
      }
    }
    cout<<ind<<endl;
}