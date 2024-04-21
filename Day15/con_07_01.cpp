#include <set>
#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	set<int> s;
	// a[i] + a[j] == k, a[i] < a[j]
	// a[i] + a[j] == k -> a[i] == k - a[j]
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int y = k - a[i];
		if (y > a[i]) {
			if (s.find(y) != s.end()) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}