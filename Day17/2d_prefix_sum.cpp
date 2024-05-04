/*
4 5
1 2 3 4 5
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
3
1 1 4 5 : 60
1 1 4 1 : 8
2 2 4 4 : 27
*/

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n + 1][m + 1];
	int s[n + 1][m + 1];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i <= n; i++) {
		s[i][0] = 0;
	}
	for (int j = 0; j <= m; j++) {
		s[0][j] = 0;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			s[i][j] = s[i][j-1] + s[i-1][j]
				- s[i-1][j-1] + a[i][j];
		}
	}

	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1--; y1--;
		int ans = s[x2][y2] - s[x1][y2] - s[x2][y1]
			+ s[x1][y1];
		cout << ans << endl;
	}
	return 0;
}
