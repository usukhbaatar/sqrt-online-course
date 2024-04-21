#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[100001]; // a[0] <= a[1] <= ... <= a[n-1]

// a[i] <= x байх хамгийн их a[i];

/*
// b: 1 1 1 1 1 1 0 0 0 0 0
                ^ ^
                l r
a[i] <= x : b[i] = 1
a[i] >  x : b[i] = 0
*/

int binary_search(int x) {
	if (a[0] > x) return 0;
	if (a[n - 1] <= x) return a[n - 1];
	int l = 0, r = n - 1; // b[0] == 1
	// b[l] = 1, b[r] = 0
	while (l + 1 < r) {
		int m = (l + r) / 2;
		if (a[m] <= x) { // b[m] == 1
			l = m; // b[l] = 1, b[r] = 0
		} else { // b[m] == 0
			r = m; // b[l] = 1, b[r] = 0
		}
	}
	// l + 1 = r b[l] = 1, b[l + 1] = 0
// b: 1 1 1 1 1 1 0 0 0 0 0
//              ^ ^
//              l r

	return a[l];
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < q; i++) {
		int x; cin >> x;
		cout << binary_search(x) << endl;
	}
	return 0;
}
