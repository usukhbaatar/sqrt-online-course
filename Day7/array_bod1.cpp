/*
1.
Танд n урттай a хүснэгт өгөв
Түүний утгаараа m дахь элементийн утгыг олоорой
*/

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	// Selection Sort
	for (int i = 0; i < m; i++) {
		// i-зорилго a[i] ийг a[i], a[i+1], ..., a[n-1]
		// тоонууд дундаас хамгийн бага нь болгох
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]); // утгыг нь солих
			}
		}
	}
	cout << a[m - 1] << endl;
	return 0;
}