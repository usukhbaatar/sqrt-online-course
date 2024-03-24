#include <iostream>
using namespace std;

const int mod = 1e9 + 7;
const int maxn = 1e5 + 1;

long long a[maxn], b[maxn], c[maxn];

int main() {
	int n;
	cin >> n;
	a[1] = 8;
	b[1] = 1;
	c[1] = 0;

	for (int i = 2; i <= n; i++) {
		a[i] = ((a[i - 1] + b[i - 1] + c[i - 1]) * 9) % mod;
		b[i] = a[i - 1];
		c[i] = b[i - 1];
	}

	long long C = 9;
	for (int i = 0; i < n - 1; i++) {
		C = (C * 10) % mod;
	}

	long long B = (a[n] + b[n] + c[n]) % mod;
	long long A = ((C - B) % mod + mod) % mod;
	cout << A << endl;
	return 0;
}