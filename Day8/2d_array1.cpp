// https://sqrt.mn/tasks/152
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int d[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> d[i][j];
		}
	}

	int a[n]; // a[0] -> 0 дугаар мөрийн нийлбэр

	for (int i = 0; i < n; i++) {
		// i дугаар мөрийн нийлбэрийг олох
		a[i] = 0;
		for (int j = 0; j < n; j++) {
			a[i] = a[i] + d[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;

	int b[n]; // b[0] -> 0 дугаар баганын нийлбэр
	for (int j = 0; j < n; j++) {
		// j дугаар баганын нийлбэрийг олох
		b[j] = 0;
		for (int i = 0; i < n; i++) {
			b[j] = b[j] + d[i][j];
		}
	}

	for (int j = 0; j < n; j++) {
		cout << b[j] << ' ';
	}
	cout << endl;
	return 0;
}