#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;

	long long ans = 0;
	long long z = 10;
	while (z <= n) {
		long long a = n / z;
		long long b = n % z;
		if (a * b > ans) {
			ans = a * b;
		}
		z = z * 10;
	}
	cout << ans << endl;
	return 0;
}