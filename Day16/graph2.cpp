#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> adj;

int main() {
	int n, m;
	cin >> n >> m;
	adj.resize(n);

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// adj[i]: [?, ?] i-дугаар оройн холбоотой оройнууд
	for (int i = 0; i < n; i++) {
		cout << i << ": ";
		for (int j = 0; j < adj[i].size(); j++) {
			cout << adj[i][j] << " ";
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
0: 1 2 4 3 
1: 0 4 
2: 0 3 4 
3: 2 4 0 
4: 1 3 2 0
*/