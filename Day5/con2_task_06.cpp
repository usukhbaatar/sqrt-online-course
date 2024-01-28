#include <bits/stdc++.h>
using namespace std;

bool is2(int x) {
	set<int> s;
	while (x > 0) {
		s.insert(x % 10);
		x /= 10;
	}
	return s.size() == 2;
}

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (is2(i)) {
			cout << i << endl;
		}
	}
	return 0;
}