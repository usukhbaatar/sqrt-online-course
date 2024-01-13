#include <iostream>
using namespace std;

int main() {
	int n;
	int a, b, c, t, x, y;
	cin >> n;
	// 1 <= n <= 999
	if (n <= 9) { // 1 orontoi
		cout << 0;
	} else if (n <= 99) { // 2 orontoi
		// n = 64
		b = n % 10; // b=4
		a = n / 10; // a=6
		// erembe
		if (a > b) { // tiim
			t = a;   // t=6
			a = b;   // a=4
			b = t;   // b=6
		}
		// a=4,b=6
		x = b * 10 + a; // x=64
		y = a * 10 + b; // y=46
		cout << x - y;
	} else { // 3 orontoi
		// a, b, c
		a = n / 100;
		c = n % 10;
		b = (n / 10) % 10;
		// erembe (ab, bc, ab)
		if (a > b) {
			t = a; a = b; b = t;
		}
		if (b > c) {
			t = b; b = c; c = t;
		}
		if (a > b) {
			t = a; a = b; b = t;
		}
		// a<=b<=c;
		// x = cba
		// y = abc
		x = c * 100 + b * 10 + a;
		y = a * 100 + b * 10 + c;
		cout << x - y;
	}
	return 0;
}
