#include <iostream>
using namespace std;
int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n; // 1234
	int a, b, c, d;

	d = n % 10; // 4
	n = n / 10; // 123

	c = n % 10; // 3
	n = n / 10; // 12

	b = n % 10; // 2
	n = n / 10; // 1
	a = n;      // 1

	// a, b, c, d = 1, 2, 3, 4

	cout << d << a << b << c << " ";
	cout << c << d << a << b << " ";
	cout << b << c << d << a;
	return 0;
}