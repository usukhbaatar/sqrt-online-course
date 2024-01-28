#include <iostream>
using namespace std;

int main() {
	int a, s = 0;
	for (int i = 0; i < 20; i++) {
		cin >> a;
		if (a > 0) {
			s++;
		}
	}
	cout << s << endl;
	return 0;
}