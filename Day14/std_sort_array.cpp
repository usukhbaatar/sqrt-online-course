#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// array sort
	int n; cin >> n;
	int a[n]; // a[0], a[1], ..., a[n-1]
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	// O(n*log(n))
	// a[1], a[2], ..., a[n]: sort(a + 1, a + n + 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}