// https://sqrt.mn/tasks/178
#include <string>
#include <iostream>
using namespace std;

bool islower(char c) {
	if ('a' <= c && c <= 'z') return true;
	return false;
}

bool isupper(char c) {
	if ('A' <= c && c <= 'Z') return true;
	return false;
}

int main() {
	string pw;
	cin >> pw;

	int n = pw.size();

	int cnt = 0;
	if (n >= 8) cnt++;

	int upper = 0, lower = 0, other = 0;

	for (int i = 0; i < n; i++) {
		if (islower(pw[i])) lower = 1;
		else if (isupper(pw[i])) upper = 1;
		else other = 1;
	}

	cnt = cnt + (upper + lower + other);
	
	if (cnt == 4) {
		cout << "Strong" << endl;
	} else if (cnt >= 2) {
		cout << "Good" << endl;
	} else {
		cout << "Bad" << endl;
	}
	return 0;
}