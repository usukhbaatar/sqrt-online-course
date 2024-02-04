/*
	n тоо өгөв
	дараа нь n ширхэг тоо өгөв : а дараалал
	дараа нь x тоо өгөв
	тэгвэл а дараалал дотор, x ээс их хэдэн тоо байгаа вэ?
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
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (a[i] > x) {
			cnt++; // тоолох
		}
	}
	cout << cnt << endl;
	return 0;
}
