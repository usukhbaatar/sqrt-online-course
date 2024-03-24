#include <iostream>
using namespace std;

const int mod = 1000000007;

int main() {
	int a[100001], n;
	cin >> n;
	a[1] = 1;
	a[2] = 2;
	for (int i = 3; i <= n; i++) {
		a[i] = (a[i - 1] + a[i - 2]) % mod;
	}
	cout << a[n] << endl;
	return 0;
}