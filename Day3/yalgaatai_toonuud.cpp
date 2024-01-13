#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	int t, x;
	cin >> a;
	x = 1;
	cin >> b;
	if (b != a) {
		x = x + 1;
	}
	cin >> c;
	if (c != a && c != b) {
		x = x + 1;
	}
	cin >> d;
	if (d != a && d != b && d != c) {
		x = x + 1;
	}
	cout << x;
	return 0;
}