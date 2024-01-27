#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int z = 1, x = 0;
	// 2^0 = 1 ,, z = 1, x = 0
	// 2^x = z

	while (z < n) {
		z = z * 2;
		x = x + 1;
	}
	// 2^x == z >= n

	if (z == n) {
		cout << x << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}