  #include <bits/stdc++.h>
  using namespace std;
  //ios_base::sync_with_stdio(false);
  #ifdef CORLEONE
    #define d(b) cerr<< #b << " " << b << endl
    #else
    #define d(b)
  #endif


  // int foo(int);
  
  long long ans[100005];

  int main()
  {
    int n;  
    long long count[100005];
    for(int i=0;i<=100001;i++) {count[i]=0;}
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      count[a[i]]++;
    }
    ans[0] = 0; ans[1] = count[1];
    // cout<<foo(n)<<endl;
    for(int i=2;i<=100000;i++){
      ans[i] = max(ans[i-1] , ans[i-2] + count[i]*i);
    }
    cout<<ans[100000]<<endl;
  }