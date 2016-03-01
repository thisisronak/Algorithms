#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

long long a[50010];

int main()
 {
  int n;
  cin >> n;
  long long sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sum /= n;
  long long c = 0;
  for(int i = 0; i < n - 1; i++) {
    if(a[i] == sum) continue;
    c += abs(sum - a[i]);
    if(a[i] < sum) a[i + 1] -= abs(sum - a[i]);
    else if(a[i] > sum) a[i + 1] += abs(sum - a[i]);
    // a[i] = sum;
  }

  cout << c << endl;
}