// O(sqrt(n)) -> n <= 10^14
// https://www.geeksforgeeks.org/measure-execution-time-function-cpp/

#include <cmath>
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

// O(sqrt(n))
bool is_prime(long long n) {
	if (n <= 1) return false;
	int m = sqrt(n);
	for (int i = 2; i <= m; i++) {
		if (n % i == 0) {
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