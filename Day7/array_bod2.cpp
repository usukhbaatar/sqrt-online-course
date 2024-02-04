/*
2.
Танд n урттай a хүснэг өгөв
Тэгвэл зарим элементүүдийг нь сонгож аваад нэмэхэд гарч
болох боломжит хамгийн их утгыг олоорой.
	: эерэг тоонуудын нийлбэр
	! эерэг тоо байхгүй бол яах вэ?
*/

#include <iostream>
using namespace std;

int main() {
	int n, s = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > 0) {
			s = s + a[i];
		}
	}
	// a[0] - ийг хамгийн их нь болгох
	for (int j = 1; j < n; j++) {
		if (a[0] < a[j]) {
			swap(a[0], a[j]);
		}
	}
	// хамгийн их нь a[0]
	
	if (a[0] <= 0) {
		cout << a[0] << endl;
	} else {
		cout << s << endl;
	}
	return 0;
}