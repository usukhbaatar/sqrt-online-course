#include <string>
#include <iostream>
using namespace std;

const int mod = 1e9 + 7;

int main() {
	int n; cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int dp[n][n];
	dp[0][0] = 1;
	for (int j = 1; j < n; j++) {
		dp[0][j] = dp[0][j - 1];
		if (s[0][j] == '*') dp[0][j] = 0;
	}

	for (int i = 1; i < n; i++) {
		dp[i][0] = dp[i - 1][0];
		if (s[i][0] == '*') dp[i][0] = 0;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
			if (s[i][j] == '*') dp[i][j] = 0;
		}
	}
	cout << dp[n - 1][n - 1] << endl;
	return 0;
}
