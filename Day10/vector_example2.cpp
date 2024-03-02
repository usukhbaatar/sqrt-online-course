#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n, 0);
	// int a[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int x, y;
	cin >> x >> y;
	
	
	for (int i = 0; i <= n; i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
	// хөрвүүлэх
	reverse(v.begin(), v.end());
	for (int i = 0; i <= n; i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
}