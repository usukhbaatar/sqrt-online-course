#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	if (x >= 21) {
		cout << 5 << " " << 26 - x << endl;
	} else if (x >= 17) {
		cout << x - 16 << " " << 5 << endl;
	} else if (x >= 13) {
		cout << 4 << " " << 17 - x << endl;
	} else if (x >= 10) {
		cout << x - 9 << " " << 4 << endl;
	} else if (x >= 7) {
		cout << 3 << " " << 10 - x << endl;
	} else if (x >= 5) {
		cout << x - 4 << " " << 3 << endl;
	} else if (x >= 3) {
		cout << 2 << " " << 5 - x << endl;
	} else if (x >= 2) {
		cout << x - 1 << " " << 2 << endl;
	} else {
		cout << 1 << " " << 1 << endl;
	}
	return 0;
}