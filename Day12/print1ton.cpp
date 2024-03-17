#include <iostream>
using namespace std;

void print(int n) {
	if (n == 0) {
		return;
	}
	print(n - 1); // итгэх хэрэгтэй, зөв
	cout << n << ' '; // cout << n; -> зөв
}

int main() {
	print(10);
	// print(9), cout << 10
}