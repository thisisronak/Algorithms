/*
  Rajat Jain 
  Online Judges - sensiblemadman
  Github - thisisrajat
*/

// Prefix Function's Complexity is O(|P|)
// KMP's Complexity is O(|T|)
// Overall Complexity O(|P| + |T|)
// P is length of pattern and,
// T is length of Text

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <deque>
#include <sstream>
#include <utility>
#include <functional>
#include <numeric>
#include <stack>  
#include <queue>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

string text = "abcabcd";
string pattern = "bca";

vector<int> prefix(string s) {
  int n = s.size();
  int j;
  vector<int> f(n); f[0] = 0;
  for(int i = 1; i < n; i++) {
    j = f[i-1];
    while(j > 0 && s[i] != s[j]) {
      j = f[j - 1];
    }
    if(s[i] == s[j]) {
      j++;
    }
    f[i] = j;
  }

  return f;
}


void KMP() {
  bool ok = false;
  int n = text.size();
  int m = pattern.size();
  int i = 0, j = 0;
  vector<int> f = prefix(pattern);
  for( ; ; ) { // j - pattern pointer i - text pointer
    if(j >= n) break;
    if(text[j] == pattern[i]) {
      i++; 
      j++;
      if(i == m){
        ok = true;
        break;
      }
    }
    else if(i > 0) i = f[i]; 
    else j++;
  }
  if(ok) cout << "Match Found!!\n";
  else cout << "No Match\n";
}


int main() {
  KMP();
}



