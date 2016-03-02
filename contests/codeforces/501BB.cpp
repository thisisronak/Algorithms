#include <iostream>
#include <cstring>
using namespace std;
char aa[1001][26];
char bb[1001][26];
int q;
int len=0;

char a[26],b[26];
int main() 
{
  int i;
  cin>>q;
  while(q--)
    {
     cin>>a>>b;
      
    int i;
    for(i=0;i<len;i++)
      {
      if(strcmp(bb[i],a)==0){
            strcpy(bb[i],b);
            break;
        }
      }
     if(i==len)
      {
        strcpy(aa[len],a);
        strcpy(bb[len],b);
        len++;
      }
   } 
  cout<<len<<"\n";
  for(i=0;i<len;i++)
    cout<<aa[i]<<" "<<bb[i]<<"\n";
  return 0;
}