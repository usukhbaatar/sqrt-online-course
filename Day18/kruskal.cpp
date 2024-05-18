#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100000;

int n, m;
int p[maxn];

void Build() {
	for (int i = 0; i < n; i++) {
		p[i] = i;
	}
}

int Find(int x) {
	if (p[x] == x) return x;
	int y = Find(p[x]);
	p[x] = y; // сайжруулалт
	return y;
}

void Union(int x, int y) {
	int a = Find(x);
	int b = Find(y);
	if (a == b) return;
	p[b] = a;
}

// vector<pair<int, int>> adj[maxn];
vector<pair<int, pair<int, int>>> edges;
// {e, {u, v}} ->   u ------ (e) ------ v

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v, e;
		cin >> u >> v >> e;
		edges.push_back(make_pair(e, make_pair(u, v)));
	}
	sort(edges.begin(), edges.end());
	
	Build();
	int ans = 0; // mst-ийн ирмэгүүдийн нийлбэр
	for (int i = 0; i < m; i++) {
		int u = edges[i].second.first;
		int v = edges[i].second.second;
		int e = edges[i].first;
		// u ------ (e) ------ v
		if (Find(u) != Find(v)) {
			Union(u, v);
			ans += e;
			cout << u << " " << v << " " << e << endl;
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
2 5 1
5 8 2
2 4 3
1 2 7
0 3 8
6 7 8
7 8 8
3 2 9
46
*/