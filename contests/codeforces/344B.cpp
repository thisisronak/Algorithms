#include <bits/stdc++.h>
using namespace std;
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif;

int main(){
    int a, b, c, s;

    cin >> a >> b >> c;
    s = (a+b+c)/2;

    if(!(s-a)+!(s-b)+!(s-c)<2&&s-max(a,max(b,c))>=0&&(a+b+c)%2==0)
    {
        cout << s-c << " " << s-a << " " << s-b << endl;
    } 
    else 
      cout << "Impossible\n";
}