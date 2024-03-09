// O(sqrt(n)) -> n <= 10^14
// https://www.geeksforgeeks.org/measure-execution-time-function-cpp/

#include <cmath>
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

bool is_prime(long long n) {
	if (n <= 1) return false;
	int m = sqrt(n);
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	if (n == 3) return true;
	if (n % 3 == 0) return false;
	// p = 6 * x + 1, 6 * x - 1
	for (int i = 6; i - 1 <= m; i += 6) {
		if (n % (i - 1) == 0) {
			return false;
		}
		if (n % (i + 1) == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	auto start = high_resolution_clock::now();
	long long n = 10000000, c = 0;
	for (int i = 1; i <= n; i++) {
		if (is_prime(i)) c++;
	}
	cout << c << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() / (1000000.0) << endl;
	return 0;
}