#include <iostream>
using namespace std;

int main() {
	int a, b;
	int c, d;
	cin >> a >> b;
	cin >> c >> d;

	if (a == c or b == d) {
		cout << "YES";
		return 0;
	}

	if (a - c == b - d or c - a == b - d) {
		cout << "YES";
		return 0;
	}

	cout << "NO";
	return 0;
}