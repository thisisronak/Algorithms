#include <bits/stdc++.h>

using namespace std;


struct TrieNode {
  int next[26];
  bool word_ends_here;
} trie[100010];

int n = 1;

int main() {
  while(true) {
    char ch;
    string s;
    cin >> ch;
    cin >> s;
    if(ch == 'i') {
      // insert_into_trie()
      int sz = s.size();
      int at = 1;
      for(int i = 0; i < sz; i++) {
        if(trie[at].next[s[i] - 'a'] == 0) {
          trie[at].next[s[i] - 'a'] = ++n;
        }        
        at = trie[at].next[s[i] - 'a'];
        if(i == sz - 1) {
          trie[at].word_ends_here = true;
        }
      }
    }
    else {
      // search_in_trie()
      int at = 1;
      int sz = s.size();
      bool ok = true;
      for(int i = 0; i < sz; i++) {
        if(trie[at].next[s[i] - 'a'] == 0) {
          ok = false;
          break;
        }
        at = trie[at].next[s[i] - 'a'];
      }
      if(ok && trie[at].word_ends_here == true) {
        cout << "Found\n";
      }
      else {
        cout << "Not Found\n";
      }
    }
  }

}