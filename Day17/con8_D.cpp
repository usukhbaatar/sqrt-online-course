#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	pair<int, char> a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
	}
	string s; cin >> s;
	int l = 0, g = 0;
	for (int i = 0; i < n; i++) {
		a[i].second = s[i];
		if (s[i] == 'L') l++;
		else g++;
	}

	sort(a, a + n);
	int mn = n + 1, val = 0;
	if (a[0].first > 1) {
		val = 1;
		mn = g;
	}

	int left = 0, right = g;
	for (int i = 0; i < n; i++) {
		if (a[i].second == 'L') {
			left++;
		} else {
			right--;
		}
		if (i + 1 < n && a[i + 1].first > a[i].first + 1) {
			if (left + right < mn) {
				mn = left + right;
				val = a[i].first + 1;
			}
		}
	}
	if (mn > l) {
		mn = l;
		val = a[n - 1].first + 1;
	}
	cout << val << ' ' << mn << endl;
	return 0;
}