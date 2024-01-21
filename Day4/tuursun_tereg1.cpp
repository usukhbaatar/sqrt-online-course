#include <iostream>
using namespace std;

int main() {
	int y, x; cin >> y >> x;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		if (x > 3) x = x - 3; // зүүн тийш
		else if (y > 3) y = y - 3; // дээшээ
		else x = x + 3; // баруун
	}
	cout << y << ' ' << x << endl;
	return 0;
}