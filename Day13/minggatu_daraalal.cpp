#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

int main() {
	int n; cin >> n;
	long long c[n + 1];
	c[0] = 1;

	for (int i = 1; i <= n; i++) {
		c[i] = 0;
		for (int j = 0; j < i; j++) {
			c[i] += c[j] * c[i - 1 - j];
			c[i] %= mod;
		}
	}
	cout << c[n] << endl;
	return 0;
}