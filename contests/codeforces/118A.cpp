#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl

const int N = 111;
int n, m, k, i, a, b;
char s [N], si;
int main ()
{
   // freopen("input.txt","r",stdin);
   scanf ("%s", &s);

   for ( i=0; si = s [i], si; i++ )
   {
      if ( si == 'A' || si == 'O' || si == 'Y' || si == 'E' || si == 'U' || si == 'I' ||
           si == 'a' || si == 'o' || si == 'y' || si == 'e' || si == 'u' || si == 'i' )
         continue;
      cout<<".";

      if ( si <= 'Z' )
         si -= 'A' - 'a';
      cout<<si;
   }

   return 0;
}
