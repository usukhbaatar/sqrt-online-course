// https://sqrt.mn/tasks/162
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; // string ( size , chars, ...): class
	cin >> s; // нэг үг уншиж авах

	int n = s.size(); // тухайн үгийн утр
	// s[0], s[1], ..., s[n-1] тэмдэгтүүд

	for (int i = 0; i < n; i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			s[i] = s[i] + 32;
		}
	}
	cout << s << endl;
	return 0;
}
