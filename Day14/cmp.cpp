// Ангийн хүүхдүүд охид нь тэгш өндөртэй,
// хөвгүүд сондгой өндөртэй, охид хөвгүүдээр ялгаад
// бүх охид урдаа өсөх дарааллаар
// бүх хөвгүүд хойноо буурах дарааллаар жагсаа

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// жиших дүрэм
// - тэгш тоо сондгой тооноос бага
// - хоёр тэгш тоо бол бага утгатай нь бага
// - хоёр сондгой тоо бол их утгатай нь бага

// харьцуулагч функц
// x бага y бол true, үгүй бол false

bool cmp(int x, int y) {
	if (x % 2 != y % 2) {
		if (x % 2 == 0) return true;
		else return false;
	}
	if (x % 2 == 0) {
		if (x <= y) return true;
		else return false;
	}
	if (x >= y) return true;
	else return false;
}

bool lss(int x, int y) {
	if (x >= y) return true;
	else return false;
}

int main() {
	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end(), cmp);
	// v vector-ийг cmp дүрмээр эрэмбэл
	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
	cout << endl;

	sort(v.begin(), v.end(), lss);
	// v vector-ийг cmp дүрмээр эрэмбэл
	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
	return 0;
}
