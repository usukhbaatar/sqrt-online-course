#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int a[7], x = 0;

	cin >> n;
	while (n > 0) {
		int b = n % 10;
		if (b == 9) b = 6;
		a[x] = b;
		x++;
		n = n / 10;
	}
	sort(a, a + x); // a[0], ..., a[x-1]

	//x: оронгийн тоо
	if (a[0] == 0) {
		for (int i = 0; i < x; i++) {
			if (a[i] > 0) {
				a[0] = a[i];
				a[i] = 0;
				break;
			}
		}
	}

	for (int i = 0; i < x; i++) {
		cout << a[i];
	}
	cout << endl;

	// a[0] = 0, a[1] = 0, 
	// a[i] > 0 хамгин бага i ийг олоод
	// a[0] = a[i],
	// a[i] = 0;
	// 259000 -> 2 0 0 0 5 6 8
}