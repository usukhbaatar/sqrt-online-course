#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0) return 1;
	int a = factorial(n - 1);
	return a * n;
}

int main() {
	int x = 4;
	int y = factorial(x);
	cout << y << endl;
}
