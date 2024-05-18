// https://codeforces.com/edu/course/2/lesson/4/1/practice
#include <iostream>
using namespace std;

int n;
int a[100001];
int st[400001]; // 4n

// i дугаар зангилаа: (l -- r) сегментийг төлөөлнө
void build(int i, int l, int r) {
	if (l == r) {
		st[i] = a[l];
		return;
	}
	int m = (l + r) / 2;
	build(2 * i + 1, l, m);
	build(2 * i + 2, m + 1, r);
	// нийлбэр сегмент трий
	st[i] = st[2 * i + 1] + st[2 * i + 2];
}

// i(L--R) зангилааны (l--r) завсрын нийлбэр
// a[l]+...+a[r] = ?
int query(int i, int L, int R, int l, int r) {
	if (L == l && r == R) { // бүтнээрээ тэнцүү бол (1)
		return st[i];
	}
	int m = (L + R) / 2;
	if (r <= m) { // (2)
		return query(2 * i + 1, L, m, l, r);
	} else if (m + 1 <= l) { // (3)
		return query(2 * i + 2, m + 1, R, l, r);
	} else { // (4)
		return query(2 * i + 1, L, m, l, m) + 
			query(2 * i + 2, m + 1, R, m + 1, r);
	}
}

// a[p] += v
void update(int i, int L, int R, int p, int v) {
	if (L == R) {
		st[i] += v;
		return;
	}
	int m = (L + R) / 2;
	if (p <= m) { // зүүн талд байна
		update(2 * i + 1, L, m, p, v);
	} else { // баруун талд байна
		update(2 * i + 2, m + 1, R, p, v);
	}
	// нийлбэр сегмент трий
	st[i] = st[2 * i + 1] + st[2 * i + 2];
}


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	build(0, 0, n - 1);

	int q;
	cin >> q;
	for (int j = 0; j < q; j++) {
		int c; cin >> c;
		if (c == 1) {
			int l, r; cin >> l >> r;
			cout << query(0, 0, n - 1, l, r) << endl;
		} else {
			int i, v;
			cin >> i >> v;
			update(0, 0, n - 1, i, v);
		}
	}
}