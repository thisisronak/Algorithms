#include <iostream>
#define MAX 200000
using namespace std;

long long manu=0, maxu=0, mi=1000000000, ma=0,n,a[MAX];

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		if (a[i]<mi) {
			manu=1;
			mi=a[i];
		}
		else if (a[i]==mi) {
			manu++;
		}
		if (a[i]>ma) {
			maxu=1;
			ma=a[i];
		}
		else if (a[i]==ma) {
			maxu++;
		}
	}
	if (ma!=mi) cout << (ma-mi) << " " << (maxu*manu) << "\n";
	if (ma==mi) cout << 0 << " " << (n*(n-1)/2) << "\n";
	return 0;
}
