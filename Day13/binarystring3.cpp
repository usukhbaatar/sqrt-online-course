#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

bool seen[10][100001];
int mem[10][100001];
int n, k;

int dp(int x, int n) {
	if (n == 1) {
		if (x == 0) return 1;
		if (x == 1) {
			// k = 1, "0" -> invalid : 0
			if (k > 1) return 1;
			else return 0;
		}
		return 0;
	}

	if (seen[x][n]) return mem[x][n];

	if (x > 0) {
		mem[x][n] = dp(x - 1, n - 1);
	} else {
		for (int j = 0; j < k; j++) {
			mem[x][n] += dp(j, n - 1);
			mem[x][n] %= mod;
		}
	}
	seen[x][n] = true;
	return mem[x][n];
}

int main() {
	cin >> n >> k;
	int ans = 0;
	for (int x = 0; x < k; x++) {
		ans += dp(x, n);
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}