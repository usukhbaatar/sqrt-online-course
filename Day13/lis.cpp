#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n + 1];
	int dp[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	a[0] = 0;
	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		int j = 0;
		for (int k = 1; k < i; k++) {
			if (a[k] < a[i] && dp[k] > dp[j]) {
				j = k;
			}
		}
		dp[i] = dp[j] + 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (ans < dp[i]) ans = dp[i];
	}
	cout << ans << endl;
}
