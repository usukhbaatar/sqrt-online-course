#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long p = 2;
	while (p * p <= n) {
		if (n % p == 0) {
			int x = 0;
			while (n % p == 0) {
				n = n / p;
				x++;
			}
			cout << p << ' ' << x << endl;
		}
		p++;
	}
	if (n > 1) {
		cout << n << ' ' << 1 << endl;
	}
	return 0;
}