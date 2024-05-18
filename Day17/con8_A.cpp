/*
Аливаа яг гурван хуваагчтай тоо гэдэг нь
*/
#include <iostream>
using namespace std;

bool is_prime(int x) {
	if (x < 2) return false;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 2; i * i <= n; i++) {
		if (is_prime(i)) cout << i * i << " ";
	}
	cout << endl;
	return 0;
}
