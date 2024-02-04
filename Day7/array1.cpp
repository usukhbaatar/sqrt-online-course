/*
	n тоо өгөв
	дараа нь n ширхэг тоо өгөв
	эдгээр тоонуудын хамгийн ихийг нь ол
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	// a[0], a[1], ..., a[n-1] нийт n ширхэг хувьсагч

	for (int i = 0; i < n; i++) { // i: 0, 1, ..., n-1
		cin >> a[i];
	}

	int x = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > x) { // сайжруулах арга
			x = a[i];
		}
	}
	cout << x << endl;
	return 0;
}

