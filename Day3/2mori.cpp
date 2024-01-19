#include <iostream>
using namespace std;

int main() {
	int a, b;
	int c, d;
	
	cin >> a >> b;
	cin >> c >> d;

	int x, y;

	if (a > c) x = a - c;
	else x = c - a;

	if (b > d) y = b - d;
	else y = d - b;

	// нүдний өнгө
	if ((c + d) % 2 != (a + b) % 2) {
		cout << "NO";
		return 0;
	}
	if (x > 4 || y > 4) {
		cout << "NO";
		return 0;
	}
	if (x == 2 && y == 2) {
		cout << "NO";
		return 0;
	}
	if (x == 4 && y == 4) {
		cout << "NO";
		return 0;
	}
	if (x == 1 && y == 1) {
		if (a > 4) {
			a = 9 - a;
			c = 9 - c;
		}
		if (b > 4) {
			b = 9 - b;
			d = 9 - d;
		}
		if (a > c) {
			swap(a, b);
			swap(c, d);
		}
		if (a == 1 && b == 1) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}