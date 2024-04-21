#include <iostream>
#include <algorithm>
using namespace std;

int rev(int x) {
	int r = 0;
	while (x > 0) {
		r = r * 10 + x % 10;
		x = x / 10;
	}
	return r;
}

int main() {
	int n; cin >> n;
	pair<int, int> a[n];
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a[i] = make_pair(rev(x), x);
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i].second << ' ';
	}
	cout << endl;
	return 0;
}