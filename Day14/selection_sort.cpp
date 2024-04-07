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

	// Selection Sort
	for (int i = 0; i < n; i++) {
		int x = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[x]) x = j;
		}
		swap(a[i], a[x]);
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}