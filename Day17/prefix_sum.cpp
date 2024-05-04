/*
n  <= 10^5
a[1], a[2], ..., a[n]
q  <= 10^5
l r  -> a[l] + a[l+1] + ... + a[r] = ?
l r

10
1 2 4 3 1 6 5 1 0 1
3
1 3   : 7
1 10  : 24
4 8   : 16
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 1], s[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	s[0] = 0;
	for (int i = 1; i <= n; i++) {
		s[i] = s[i - 1] + a[i];
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		cout << s[r] - s[l - 1] << endl;
	}
	return 0;
}
