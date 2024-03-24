#include <iostream>
using namespace std;

const int maxn = 100001;
const int mod = 1e9 + 7;

long long a[maxn], b[maxn], c[maxn];

int main() {
	a[1] = 1;
	b[1] = 1;
	c[1] = 1;

	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		a[i] = (b[i - 1] + c[i - 1]) % mod;
		b[i] = (a[i - 1] + b[i - 1] + c[i - 1]) % mod;
		c[i] = (a[i - 1] + b[i - 1] + c[i - 1]) % mod;
	}
	cout << (a[n] + b[n] + c[n]) % mod << endl;
	return 0;
}
