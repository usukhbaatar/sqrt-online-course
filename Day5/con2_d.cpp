#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		// i тоог хөрвүүлэх
		int j = 0;
		int x = i;
		while (x > 0) {
			j = j * 10 + x % 10;
			x = x / 10;
		}
		if (i == j) {
			cout << i << endl;
		}
	}
	return 0;
}