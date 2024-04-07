// sort: a[0], a[1], ..., a[n-1]

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// Bubble Sort
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}