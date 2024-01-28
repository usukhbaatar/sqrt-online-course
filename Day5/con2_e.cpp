#include <iostream>
using namespace std;

int main() {
	int n, s, a, b, c;

	cin >> n;
	cin >> a >> b >> c;
	s = a + b + c;

	for (int i = 4; i <= n; i++) {
		if (i % 3 == 1) cin >> a;
		else if (i % 3 == 2) cin >> b;
		else cin >> c;
		if (s < a + b + c) { // сайжруулах арга
			s = a + b + c;
		}
	}
	cout << s << endl;
	return 0;
}