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

	int cnt = 0;
	bool vis[n] = {false};
	queue<int> q;

	for (int i = 0; i < n; i++) {
		if (vis[i] == false) {
			// i дугаар орой дээр зочлоогүй байна гэдэг
			// шинэ бүлэг байна гэсэн үг
			// BFS
			cnt++;
			q.push(i);
			vis[i] = true;
			while (!q.empty()) {
				int u = q.front();
				q.pop();
				for (int i = 0; i < adj[u].size(); i++) {
					int v = adj[u][i];
					if (vis[v] == false) {
						q.push(v);
						vis[v] = 1;
					}
				}
			}
			// тухайн бүлгийн бүх оройг vis[] = true болгосон
		}
	}

	cout << cnt << endl;
	return 0;
}