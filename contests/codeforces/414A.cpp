#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif

bool multipleOf3(int n) {
  return not (n%3);
}

int main() {
  vector<int> v(10);
  for (int i=0;i<v.size();i++)
    v[i]=i;
  cout << count_if(v.begin(), v.end(),multipleOf3) << " multiples" << endl;
}