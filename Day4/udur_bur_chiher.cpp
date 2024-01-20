#include <iostream>
using namespace std;

int main() {
	int n;
	long long a;
	cin >> a >> n;

	long long s = 0;
	for (int i = 1; i <= n; i++) { // n удаа
		s = s + a;
		a = a * 2;
	}
	cout << s << endl;
	return 0;
}