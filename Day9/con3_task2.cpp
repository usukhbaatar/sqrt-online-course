#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;

	if (k >= n) {
		k = k % n;
	}

	for (int i = k; i < n; i++) {
		cout << a[i] << ' ';
	}
	for (int i = 0; i < k; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}