#include <bits/stdc++.h>
using namespace std;

int decode(array<array<int, 3>, 3> &a) {
	int x = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			x = x * 9 + (a[i][j] - 1);
		}
	}
	return x;
}

array<array<int, 3>, 3> encode(int x) {
	array<array<int, 3>, 3> a;
	for (int i = 2; i >= 0; i--) {
		for (int j = 2; j >= 0; j--) {
			a[i][j] = x % 9 + 1;
			x /= 9;
		}
	}
	return a;
}

vector<int> next(int x) {
	vector<int> res;
	array<array<int, 3>, 3> a = encode(x);
	for (int i = 0; i < 3; i++) {
		swap(a[i][0], a[i][2]);
		res.push_back(decode(a));
		swap(a[i][0], a[i][2]);
		swap(a[0][i], a[2][i]);
		res.push_back(decode(a));
		swap(a[0][i], a[2][i]);
	}
	return res;
}

int main() {
	array<array<int, 3>, 3> a, b;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> b[i][j];
		}
	}

	int start = decode(a);
	int goal = decode(b);

	if (start == goal) {
		cout << 0 << endl;
		return 0;
	}

	int ans = -1;
	map<int, int> mp;
	queue<int> q;
	q.push(start);
	mp[start] = 0;
	while (!q.empty() && ans == -1) {
		int val = q.front();
		q.pop();
		int step = mp[val];
		vector<int> nxt = next(val);
		for (int x : nxt) {
			if (mp.find(x) != mp.end()) continue;
			mp[x] = step + 1;
			q.push(x);
			if (x == goal) {
				ans = step + 1;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}