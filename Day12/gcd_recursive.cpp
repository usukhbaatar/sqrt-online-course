#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int fastpow(int a, int b, int c) {
	if (b == 0) return 1 % c; // a^0 == 1
	if (b % 2 == 0) {
		int x = fastpow(a, b / 2, c);
		// ((a)^(b/2))^2 % c
		return (x * x) % c;
	} else {
		int x = fastpow(a, b - 1, c);
		// (a)^(b-1)*a % c
		return (a * x) % c;
	}
}

int main() {
	cout << gcd(18, 12) << endl;
	cout << fastpow(2, 10, 10000) << endl;
}
