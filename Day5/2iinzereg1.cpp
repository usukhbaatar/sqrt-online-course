#include <iostream>
using namespace std;

int main() {
	int n, x = 0;
	cin >> n;
	while (n % 2 == 0) {
		n = n / 2;
		x++;
	}
	if (n > 1) {
		x = -1;
	}
	cout << x << endl;
	return 0;
}