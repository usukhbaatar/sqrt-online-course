#include <iostream>
#include <string>
using namespace std;

char encode(char c, int k) {
	if (k >= 26) k = k % 26;
	k = 26 - k;
	if ('a' <= c && c <= 'z') {
		c = c + k;
		if (c > 'z') c = c - 26;
	}
	if ('A' <= c && c <= 'Z') {
		c = c + k;
		if (c > 'Z') c = c - 26;
	}
	return c;
}

int main() {
	string s;
	int k;
	cin >> s >> k;
	for (int i = 0; i < s.size(); i++) {
		s[i] = encode(s[i], k);
	}
	cout << s << endl;
	return 0;
}