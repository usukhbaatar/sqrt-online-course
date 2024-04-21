#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[100001]; // a[0] <= a[1] <= ... <= a[n-1]

bool binary_search(int x) {
	if (x < a[0]) return false;
	if (a[n-1] < x) return false;
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) return true;
		else if (a[m] < x) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	return false;
}

int main() {
	int q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < q; i++) {
		int x; cin >> x;
		if (binary_search(x)) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
