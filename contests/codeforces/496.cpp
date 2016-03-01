#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif
 int a[105];
int main()
{
  int n,mini;
  int mind=999990;
  cin>>n;
 
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  } 
  cout<<"here";
  for(int i=1;i<n-1;i++)
  {
    if(mind<(a[i]-a[i-1]) ) {mind = a[i]-a[i-1]; mini = i;d(mind);d(mini);}
  }
  if(mind<a[n-1]-a[n-2]){mini=n-2;}
  int maxi=0;
  for(int i=0;i<mini;i++)
  {
    maxi = max(maxi, (a[i]-a[i-1]));
  }
  for(int i=mini+1;i<n;i++)
  {
    maxi = max(maxi, (a[i]-a[i-1]));
  }
  cout<<maxi<<endl;
}