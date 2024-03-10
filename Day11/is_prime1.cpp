#include <cmath>
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

bool a[10000001] = {false};
int main() {
	auto start = high_resolution_clock::now();
	long long n = 10000000, c = 0;
	a[0] = true; // not prime
	a[1] = true;

	// O(n*log(n))
	for (long long i = 2; i <= n; i++) {
		if (a[i] == false) { // i: prime
			c++;
			for (long long j = i * i; j <= n; j += i) {
				// 2i, 3i, 4i, 5i
				a[j] = true; // mark, j: not prime
			}
		}
	}

	cout << c << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() / (1000000.0) << endl;
	return 0;
}