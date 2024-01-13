#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	int t, x;
	cin >> a >> b >> c >> d;

	if (a > b) {
		t = a; a = b; b = t;
	}
	if (b > c) {
		t = b; b = c; c = t;
	}
	if (c > d) {
		t = c; c = d; d = t;
	}

	if (a > b) {
		t = a; a = b; b = t;
	}
	if (b > c) {
		t = b; b = c; c = t;
	}

	if (a > b) {
		t = a; a = b; b = t;
	}

	// a <= b <= c <= d
	x = 1;
	if (a < b) {
		x = x + 1;
	}
	if (b < c) {
		x = x + 1;
	}
	if (c < d) {
		x = x + 1;
	}
	cout << x;
	return 0;
}