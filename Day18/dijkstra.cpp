// SSSP
// O(m*log(m))

#include <set>
#include <vector>
#include <iostream>
using namespace std;

int n, m;
vector<pair<int, int>> adj[100001];

// adj[0] = {(1, 1), (2, 4), (5, 9)}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v, e;
		cin >> u >> v >> e;
		adj[u].push_back(make_pair(v, e));
		adj[v].push_back(make_pair(u, e));
	}

	set<pair<int, int>> que;
	set<pair<int, int>>::iterator it;

	bool seen[n] = {false};
	// seen[i] -> i дугаар орой будагдсан эсэх
	int path[n];
	// path[i] -> i дугаар орой дээр ирэх хамгийн богино зам
	que.insert(make_pair(0, 0));
	while (!que.empty()) {
		it = que.begin();
		int u = (*it).second;
		int dis = (*it).first;
		que.erase(it);
		if (seen[u]) continue;
		// seen[u] == false;
		seen[u] = true;
		path[u] = dis;
		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i].first;
			int e = adj[u][i].second;
			if (seen[v] == false) {
				que.insert(make_pair(dis + e, v));
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i << " " << path[i] << endl;
	}
	return 0;
}

/*
Input:
9 12
0 1 10
0 2 20
0 3 8
1 2 7
3 2 9
2 4 3
2 5 1
2 6 9
4 8 4
5 8 2
6 7 8
7 8 8
Output:
0 0
1 10
2 17
3 8
4 20
5 18
6 26
7 28   -> 0 дугаар оройгоос 7 дугаар орой дээр очих хамгийн богино зам
8 20   -> 0 дугаар оройгоос 8 дугаар орой дээр очих хамгийн богино зам
*/