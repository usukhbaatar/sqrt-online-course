#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[100001];
long long k;

bool can(int x) {
	long long m = 0;
	for (int i = 0; i < n; i++) {
		m += (a[i] / x);
		if (m >= k) return true;
	}
	return false;
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int l = 1, r = 1e9 + 1;
	while (l + 1 < r) {
		int x = (l + r) / 2;
		if (can(x)) {
			l = x;
		} else {
			r = x;
		}
	}
	cout << l << endl;
	return 0;
}