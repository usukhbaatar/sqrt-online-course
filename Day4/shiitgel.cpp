#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int s = 0;
	int mx = 0;
	for (; n > 0; n = n / 10) {
		int b = n % 10;
		if (b == 9) {
			b = 6;
		}
		s = s + b;
		if (b > mx) {
			mx = b;
		}
	}
	cout << s - mx;
	return 0;
}
