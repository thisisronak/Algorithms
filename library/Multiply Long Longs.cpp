#include <iostream>
using namespace std;

template< class T >  // COMPLEXITY - O(ln(min(a, b)))
T multiply (T A, T B, T MODULO = (T)(1e9 + 7)) {
  if(B == 0) return 0;
  if(B == 1) return A  % MODULO;
  if(B % 2) return ( A + ( 2 * multiply(A, B / 2, MODULO ) ) % MODULO ) % MODULO;
  else return ( 2 * multiply(A, B / 2, MODULO) ) % MODULO;
}

int main() {
	int x = 12;
	int y = 12;
	cout << multiply(x, y) << endl;
}
