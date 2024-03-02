// https://sqrt.mn/tasks/182
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> v(2, 1);
	v[0] = 1;
	v[1] = 1;
	// push_back: O(1)
	for (int i = 2; i < n; i++) {
		v.push_back(v[i - 1] + v[i - 2]);
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
	return 0;
}