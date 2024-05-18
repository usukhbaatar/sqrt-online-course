#include <iostream>
using namespace std;

const int mod = 1e9 + 7;
int dp[1001][6001];

int main() {
	int n, k;
	cin >> n >> k;
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			for (int v = 1; v <= 6; v++) {
				if (j - v >= 0) {
					dp[i][j] += dp[i - 1][j - v];
					dp[i][j] %= mod;
				}
			}
		}
	}
	cout << dp[n][k] << endl;
	return 0;
}
