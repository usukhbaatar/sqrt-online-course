#include <iostream>
using namespace std;

int main() {
	int a, b;
	int x, y, z;

	cin >> a;     // a = xyz
	
	z = a % 10;
	b = a / 10;   // xy
	y = b % 10;
	x = b / 10;

	int s = x + y + z;
	cout << s;
	return 0;
}