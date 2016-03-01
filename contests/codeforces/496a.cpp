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
  int n ; 
  cin >> n ;
  int arr[n] ; 
  for(int i = 0 ; i < n ; i++)
  { 
    cin >> arr[i] ; 
  }
  int mx = -1;
  for(int i = 0 ; i < n-1 ; i++ )
  mx = max(arr[i+1]-arr[i], mx) ;

  int res = arr[n-1] - arr[0];
  for(int i = 1 ; i < n-1; i++)
  res = min(res, max(mx, arr[i+1] - arr[i-1]));

  cout << res << endl ; 
}