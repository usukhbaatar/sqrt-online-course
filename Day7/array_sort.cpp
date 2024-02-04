/*
	n тоо өгөв
	дараа нь n ширхэг тоо өгөв
	Тэгвэл уг хүснэгийг эрэмбэлээрэй
*/
#include <iostream>
using namespace std;

int main() {
	int n, x, cnt = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	// Selection Sort
	for (int i = 0; i < n - 1; i++) {
		// i-зорилго a[i] ийг a[i], a[i+1], ..., a[n-1]
		// тоонууд дундаас хамгийн бага нь болгох
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]); // утгыг нь солих
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
