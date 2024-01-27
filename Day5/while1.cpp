#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m; // натурал
	while (n * m > 0) {
		// ямар шоколад идэх вэ?
		int d = min(n, m);
		cout << d * d << endl;
		// шилжилт
		if (n > m) {
			n = n - m;
		} else {
			m = m - n;
		}
	}
	return 0;
}