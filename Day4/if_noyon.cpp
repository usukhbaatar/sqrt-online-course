#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a > 50) { // 3 юмуу 4 дүгээр хэсэг
		a = 101 - a;
	}

	if (b > 50) { // 2 юмуу 4 дүгээр хэсэг
		b = 101 - b;
	}

	if (a > b) {
		cout << a - 1 << endl;
	} else {
		cout << b - 1 << endl;
	}
	return 0;
}