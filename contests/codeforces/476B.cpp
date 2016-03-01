#include <bits/stdc++.h>
using namespace std;
//ios_base::sync_with_stdio(false);
#ifdef CORLEONE
  #define d(b) cerr<< #b << " " << b << endl
  #else
  #define d(b)
#endif


int a1, b1, a2, b2, c2, a, b, x = 1, y = 1, z = 1;
string s1, s2;
double d;

int main(){
    cin>>s1>>s2;
    for(int i = 0; i < s1.length(); ++i){if(s1[i] == '+')a1++; if(s1[i] == '-')b1++;}
    for(int i = 0; i < s2.length(); ++i){if(s2[i] == '+')a2++; if(s2[i] == '-')b2++; if(s2[i] == '?')c2++;}
    if((a2 > a1) || (b2 > b1)){printf("0.000000000000"); return 0;}
    if((a1 == a2) && (b1 == b2) && (c2 == 0)){printf("1.000000000000"); return 0;}
    a = a1 - a2;
    b = b1 - b2;
    for(int i = 1; i <= c2; ++i){
        x *=i;
    }
    for(int i = 1; i <= a; ++i){
        y *=i;
    }
    for(int i = 1; i <= b; ++i){
        z *=i;
    }
    
    d = (double) ( x / (y * z)) / pow(2, c2);
    printf("%.12lf", d);
    return 0;
}