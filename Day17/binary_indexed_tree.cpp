#include <iostream>
using namespace std;

int n;
int a[100001];
int s[100001];

// a[1] + a[2] + ... + a[i] : O(log(n))
int query(int i) {
	int res = 0;
	while (i > 0) {
		res += s[i]; // a[i]+a[i-1]+...+a[i-f(i)+1]
		i = i - (i & -i); // i = i - f(i)
	}
	return res;
}

// a[i] = a[i] + v;
void update(int i, int v) {
	a[i] += v;
	while (i <= n) {
		s[i] += v;
		i = i + (i & -i); // i = i + f(i)
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	// BIT байгуулах
	for (int i = 1; i <= n; i++) {
		update(i, a[i]);
	}

	int q;
	cin >> q;
	for (int j = 0; j < q; j++) {
		int c; cin >> c;
		if (c == 1) {
			int l, r; cin >> l >> r;
			cout << query(r) - query(l - 1) << endl;
		} else {
			int i, v;
			cin >> i >> v;
			update(i, v);
		}
	}
	return 0;
}