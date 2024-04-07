#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// array sort
	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	// v[0], v[1], ... v[n-1]

	sort(v.begin(), v.end()); // үл буурах
	// O(n*log(n)) : quick sort
	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
	return 0;
}
