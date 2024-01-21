#include <iostream>
using namespace std;

int main() {
	int a, b;
	int c, d;

	cin >> a >> b;
	cin >> c >> d;

	int p, q;

	for (int x = 1; x <= 8; x++) {
		for (int y = 1; y <= 8; y++) {
			if (a > x) p = a - x;
			else p = x - a;
			if (y > b) q = y - b;
			else q = b - y;
			// p * q == 2;
			if ((p == 1 and q == 2) or (p == 2 and q == 1)) { // morinii nuudel
				if (c > x) p = c - x;
				else p = x - c;
				if (y > d) q = y - d;
				else q = d - y;
				// p * q == 2;
				if ((p == 1 and q == 2) or (p == 2 and q == 1)) { // morinii nuudel
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";
	return 0;
}