#include <iostream>
#include <algorithm>
using namespace std;

long long n, h, w;

// x талтай квадрат дотор багтах уу?
bool can(long long x) {
	long long cnt = (x / h) * (x / w);
	if (cnt >= n) return true;
	else return false;
}

long long binary_search() {
	// b: 00000011111
	//          ^
	long long l = max(h, w) - 1;
	long long r = max(min(h, w) * n, max(h, w));
	// b[l] = 0, b[r] = 1;
	while (r - l > 1) {
		long long m = (l + r) / 2;
		if (can(m)) r = m;
		else l = m;
	}
	// l + 1 = r
	// b: 00000011111
	//         ^^
	//         lr
	return r;
}

int main() {
	cin >> h >> w >> n;
	cout << binary_search() << endl;
	return 0;
}
