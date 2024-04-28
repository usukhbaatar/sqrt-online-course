#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int path[n];
	path[n - 1] = -1;
	
	bool vis[n] = {false};
	queue<int> q;
	q.push(0);
	vis[0] = true;
	path[0] = 0;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i];
			if (vis[v] == false) {
				q.push(v);
				vis[v] = 1;
				path[v] = path[u] + 1;
			}
		}
	}
		
	cout << path[n - 1] << endl;
	return 0;
}