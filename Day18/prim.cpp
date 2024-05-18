// Minimum Spanning Tree
// Prim
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

	set<pair<int, pair<int, int>>> que;
	// {e, {u, v}}
	set<pair<int, pair<int, int>>>::iterator it;

	bool seen[n] = {false};
	// seen[i] -> i дугаар орой будагдсан эсэх
	int ans = 0; // mst-ийн ирмэгүүдийн нийлбэр
	que.insert(make_pair(0, make_pair(0, -1)));
	while (!que.empty()) {
		it = que.begin();
		int e = (*it).first;
		int u = (*it).second.first;
		int p = (*it).second.second;
		que.erase(it);
		if (seen[u]) continue;
		ans += e;
		seen[u] = true;
		if (p != -1) {
			cout << p << ' ' << u << ' ' << e << endl;
		}
		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i].first;
			int e = adj[u][i].second;
			if (seen[v] == false) {
				que.insert(make_pair(e, make_pair(v, u)));
			}
		}
	}
	cout << ans << endl;
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
0 3 8
3 2 9
2 5 1
5 8 2
2 4 3
2 1 7
8 7 8
7 6 8
46
*/