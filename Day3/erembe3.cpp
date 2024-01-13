#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int x;
	cin >> a >> b >> c; // a=5, b=10, c=3
	if (a > b) { // true
		x = a;   // x=10
		a = b;   // a=5
		b = x;   // b=10
	}
	// a=5, b=10, c=3
	if (b > c) {
		x = b;
		b = c;
		c = x;
	}
	// a=5, b=3, c=10;
	if (a > b) {
		x = a;
		a = b;
		b = x;
	}
	// a=3, b=5, c=10;
	cout << a << ' ' << b << ' ' << c;
	return 0;
}
