#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

int dp[10][100001];
int n, k;

int main() {
	cin >> n >> k;

	dp[0][1] = 1; // "1"
	if (k > 1) dp[1][1] = 1; // "0"

	for (int i = 2; i <= n; i++) {
		for (int x = 0; x < k; x++) {
			if (x > 0) {
				dp[x][i] = dp[x - 1][i - 1];
			} else {
				for (int j = 0; j < k; j++) {
					dp[x][i] += dp[j][i - 1];
					dp[x][i] %= mod;
				}
			}
		}
	}

	int ans = 0;
	for (int x = 0; x < k; x++) {
		ans += dp[x][n];
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}