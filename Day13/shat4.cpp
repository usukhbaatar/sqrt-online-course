#include <iostream>
using namespace std;

const int maxn = 1e5 + 1;

bool seen[maxn];
long long mem[maxn];
long long a[maxn];

long long dp(int n) {
	if (n == 1) return a[1];
	if (n == 2) return a[2];

	if (seen[n]) return mem[n];

	mem[n] = min(dp(n - 1), dp(n - 2)) + a[n];
	seen[n] = 1;
	return mem[n];
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i > 2) {
			a[i] += min(a[i - 1], a[i - 2]);
		}
	}
	cout << dp(n) << endl;
	return 0;
}