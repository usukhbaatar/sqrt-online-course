// https://sqrt.mn/tasks/143
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long x = 0, y = 1;
	for (int i = 0; i < n; i++) {
		x = x + a[i];
	}

	for (int i = 0; i < n; i++) {
		y = y * a[i];
	}

	cout << abs(x - y) << endl;
	return 0;
}