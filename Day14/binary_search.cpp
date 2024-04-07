/*
n
a[1], a[2], ..., a[n] дараалал
q
x1, x2, ..., x[q] асуултууд
a[] дотор x1 тоо байна уу?
*/

#include <iostream>
#include <algorithm>
using namespace std;

int n, q;
int a[100001];

// O(log(n))
bool exists(int x) {
	int l = 1, r = n; // a[l]--a[r]
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] < x) l = m + 1;
		else if (a[m] > x) r = m - 1;
		else return true;
	}
	return false;
}

// O((n+q)*log(n))
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1); // O(n*log(n))
	cin >> q;
	for (int ii = 0; ii < q; ii++) { // O(q*log(n))
		int x; cin >> x;
		if (exists(x)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
