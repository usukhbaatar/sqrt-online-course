/*
3.
Танд n урттай a хүснэг өгөв
Тэгвэл дараалж орсон тэнцүү элементүүд хамгийн олондоо хэд
байна вэ?

Input:
10
1 1 2 1 3 3 3 3 1 1

Output:
4
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	b[0] = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1]) {
			b[i] = b[i - 1] + 1;
		}
		else {
			b[i] = 1;
		}
	}
	int mx = 0;
	for (int i = 0; i < n; i++) {
		mx = max(mx, b[i]); // сайжруулах арга
		/*
		if (mx < b[i]) {
			mx = b[i];
		}
		*/
	}
	cout << mx << endl;
	return 0;
}