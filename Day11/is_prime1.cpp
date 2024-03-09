// O(sqrt(n)) -> n <= 10^14
// https://www.geeksforgeeks.org/measure-execution-time-function-cpp/

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

	for (int i = 2; i <= n; i++) {
		if (a[i] == false) { // i: prime
			c++;
			for (int j = 2 * i; j <= n; j += i) {
				// i = 2: 4, 6, 8, 10, 12, ...
				// i = 3: 6, 9, 12, 15, ...
				// i = 5: 10, 15, 20, 25, ...
				// i = 7: 14, 21, 28, 35, ...
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