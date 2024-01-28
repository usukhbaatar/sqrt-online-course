#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	int x, y, s = 0;

	cin >> n >> a >> b;

	for (x = 0; x <= n; x++) {
		for (y = 0; y <= n; y++) {
			if (x * a + y * b <= n) {
				s++;
			}
		}
	}
	s--; // (худалдан авалт хийгээгүй нэг тохиолдол x=0, y=0)
	cout << s << endl;
	return 0;
}