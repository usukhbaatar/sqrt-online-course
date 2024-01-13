#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, x, y;
	cin >> a >> b >> c;
	d = a * 60 + b;
	e = d + c;
	y = e % 60;
	x = e / 60;
	// x = 13, x = 14, x = 24
	if (x > 12) {
		x = x % 12;
	}
	if (x == 0) {
		x = 12;
	}
	cout << x << ' ' << y;
	return 0;
}