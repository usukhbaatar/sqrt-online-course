#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int l = 1, r;
	for (int i = 1; i <= n; i++) {
		r = l + i - 1;
		if (i % 2 == 0) {
			for (int j = r; j >= l; j--) {
				cout << j << " ";
			}
		} else {
			for (int j = l; j <= r; j++) {
				cout << j << " ";
			}
		}
		cout << endl;
		l = r + 1;
	}
	return 0;
}