#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef short int si;

char s[105];

int main(){

  scanf("%s",&s);
  printf("%s\n",s);
  int len=strlen(s);

  while(next_permutation(s,s+len)){
    printf("%s\n",s);
  }
   
  return 0;
}