#include <vector>
#include <iostream>

using namespace std;

vector<vector<pair<int, int>>> adj;

int main() {
	int n, m;
	cin >> n >> m;
	adj.resize(n);

	for (int i = 0; i < m; i++) {
		int u, v, e;
		cin >> u >> v >> e;
		adj[u].push_back(make_pair(v, e));
		adj[v].push_back(make_pair(u, e));
	}

	// adj[i]: [?, ?] i-дугаар оройн холбоотой оройнууд
	for (int i = 0; i < n; i++) {
		cout << i << ": ";
		for (int j = 0; j < adj[i].size(); j++) {
			cout << "(" << adj[i][j].first << "," << adj[i][j].second << ") ";
		}
		cout << endl;
	}
	return 0;
}
/*
Input:
5 8
0 1 3
0 2 6
1 4 9
2 3 1
4 3 9
2 4 2
0 4 1
0 3 7

Output:
0: (1,3) (2,6) (4,1) (3,7) 
1: (0,3) (4,9) 
2: (0,6) (3,1) (4,2) 
3: (2,1) (4,9) (0,7) 
4: (1,9) (3,9) (2,2) (0,1) 
*/
