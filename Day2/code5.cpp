#include <iostream>
using namespace std;

int main() {
	int N, A;
	cin >> N;
	A = N * (N + 1) * (2 * N + 1) / 6;
	cout << A;
	return 0;
}