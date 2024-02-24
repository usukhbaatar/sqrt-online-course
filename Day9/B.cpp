#include <string>
#include <iostream>
using namespace std;

int main() {
	string s, num = "";
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if ('0' <= s[i] && s[i] <= '9') {
			num = num + s[i];
		}
	}
	long long n = 0;
	for (int i = 0; i < num.size(); i++) {
		n = n * 10 + (num[i] - '0');
	}
	cout << n + 1 << endl;
	return 0;
}
