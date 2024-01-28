#include <iostream>
using namespace std;

int main() {
	int n, s, a, b, c;

	cin >> n;
	cin >> a >> b >> c;
	s = a + b + c;

	for (int i = 4; i <= n; i++) {
		a = b;
		b = c;
		cin >> c;
		if (s < a + b + c) {
			s = a + b + c;
		}
	}
	cout << s << endl;
	return 0;
}