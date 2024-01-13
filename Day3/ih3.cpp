#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int x;
	cin >> a >> b >> c; // a=10, b=5, c=3
	if (a > b) {
		x = a;
		a = b;
		b = x;
	}
	if (b > c) {
		x = b;
		b = c;
		c = x;
	}
	if (a > b) {
		x = a;
		a = b;
		b = x;
	}
	cout << a << ' ' << b << ' ' << c;
	return 0;
}
