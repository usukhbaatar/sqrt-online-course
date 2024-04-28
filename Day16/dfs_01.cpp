#include <vector>
#include <iostream>
using namespace std;

int n, m;
vector<int> adj[100];
bool vis[100];

void dfs(int u) {
	vis[u] = true;
	for (int i = 0; i < adj[u].size(); i++) {
		int v = adj[u][i];
		if (vis[v] == false) {
			dfs(v);
		}
	}
	return;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(0);

	if (vis[n - 1]) cout << "Yes" << endl;
	else cout << "No";
	return 0;
}