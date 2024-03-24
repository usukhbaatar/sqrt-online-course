#include <iostream>
using namespace std;

const int maxn = 1e6 + 1;

bool seen[maxn];
long long mem[maxn];

long long dp(int n) {
	if (n == 1) return 0;
	if (seen[n]) return mem[n];

	int x = dp(n - 1);
	if (n % 2 == 0) {
		int y = dp(n / 2);
		if (x > y) x = y;
	}
	if (n % 3 == 0) {
		int z = dp(n / 3);
		if (x > z) x = z;
	}

	mem[n] = x + 1;
	seen[n] = 1;
	return mem[n];
}

int main() {
	int n;
	cin >> n;
	cout << dp(n) << endl;
	return 0;
}