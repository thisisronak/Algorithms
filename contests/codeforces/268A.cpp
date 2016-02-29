#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int arr[101];

int main()
{
  int n, p, q, i, temp;

  scanf( "%d", &n );

  scanf( "%d", &p );

  for( i=0; i<p; ++i )
  {
    scanf( "%d", &temp );
    arr[temp]++;
  }

  scanf( "%d", &q );
  for( i=0; i<q; ++i )
  {
    scanf( "%d", &temp );
    arr[temp]++;
  }

  for( i=1; i<n+1; ++i )
  {
    if( arr[i]==0 )
    {
      printf( "Oh, my keyboard!\n" );
      return 0;
    }
  }

  printf( "I become the guy.\n" );

  return 0;
}
