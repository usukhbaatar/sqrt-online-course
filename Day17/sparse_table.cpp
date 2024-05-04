/*
n  <= 10^5
a[1], a[2], ..., a[n]
q  <= 10^5
l r  -> min(a[l], a[l+1], ..., a[r]) = ?
l r

10
1 2 4 3 1 6 5 1 0 1
3
1 3   : 1
1 10  : 0
4 8   : 1
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 1];
	int s[n + 1][20]; // --> | 2^20 > 100000
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		s[i][0] = a[i]; // min(a[i])
	}

	// (1 << j) == 2^j

	for (int j = 1; (1 << j) < n; j++) { // 16 удаа log(n)
		for (int i = 1; i + (1 << j) - 1 <= n; i++) {
			int i1 = i + (1 << (j - 1));
			s[i][j] = max(s[i][j - 1], s[i1][j - 1]);
		}
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r, j = 0;
		cin >> l >> r;
		while (l + (1 << j) - 1 <= r) j++;
		j--;
		int r1 = r - (1 << j) + 1;
		cout << max(s[l][j], s[r1][j]) << endl;
	}
	return 0;
}
