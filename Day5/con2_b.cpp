#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	int x, y;

	cin >> n >> a >> b;

	for (x = 0; x <= n; x++) {
		if (n - a * x >= 0 && (n - a * x) % b == 0) {
			cout << "Yes";
				return 0;
		}
	}
	cout << "No";
	return 0;
}