#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n][n] = {0};

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u][v] = 1;
		a[v][u] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
/*
Input:
5 8
0 1
0 2
1 4
2 3
4 3
2 4
0 4
0 3

Output:
0 1 1 1 1 
1 0 0 0 1 
1 0 0 1 1 
1 0 1 0 1 
1 1 1 1 0 
*/