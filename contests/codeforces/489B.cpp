  #include <bits/stdc++.h>
  using namespace std;
  //ios_base::sync_with_stdio(false);
  #ifdef CORLEONE
    #define d(b) cerr<< #b << " " << b << endl
    #else
    #define d(b)
  #endif

  const int maxn=105 , inf=1000;
  int g[maxn],b[maxn];

  int main()
  {
    int n , ans=0;
    cin >> n;
    for(int i=0;i<n;i++)
      cin >> b[i];
    int m;
    cin >> m;
    for(int i=0;i<m;i++)
      cin >> g[i];
    sort(b,b+n);
    sort(g,g+m);
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        if(abs(b[i]-g[j])<=1)
        {
          ans++;
          g[j]=inf;
          b[i]=inf;
        }
    cout << ans << endl;
  }