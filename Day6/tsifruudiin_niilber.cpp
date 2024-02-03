#include <iostream>
using namespace std;

int sum(long long x) {
	int s = 0;
	while (x > 0) {
		s = s + x % 10;
		x = x / 10;
	}
	return s;
}

int main() {
	long long N, T, z = 1, M;
	cin >> N >> T;
	M = N;
	while (sum(M) > T) {
		z = z * 10;
		M = (N / z + 1) * z;
	}
	cout << M - N << endl;
	return 0;
}