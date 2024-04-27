#include <array>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <iostream>
// #include "solution.h"
using namespace std;

#define rep(i, j) for (int i = 0; i < 4; i++)\
	for (int j = 0; j < 4; j++)

typedef array<array<int, 4>, 4> board;

board flip(board a, bool z = 1) {
	board b;
	rep(i, j) {
		if (z) b[i][j] = a[j][i];
		else b[i][j] = a[3 - j][3 - i];
	}
	return b;
}


board dir(board a, char c) {
	if (c == 'U') return a;
	if (c == 'L') return flip(a);
	if (c == 'R') return flip(a, 0);
	return flip(flip(a, 0));
}

board move(board a, char c) {
	a = dir(a, c);
	rep(j, i) {
		if (a[i][j] == 0) continue;
		for (int k = i + 1; k < 4; k++) {
			if (a[k][j] == 0) continue;
			if (a[i][j] == a[k][j]) {
				a[i][j] *= -2;
				a[k][j] = 0;
			}
			break;
		}
	}
	rep(i, j) if (a[i][j] < 0) a[i][j] = -a[i][j];
	rep(j, i) {
		if (a[i][j] > 0) continue;
		for (int k = i + 1; k < 4; k++) {
			if (a[k][j] > 0) {
				a[i][j] = a[k][j];
				a[k][j] = 0;
				break;
			}
		}
	}
	a = dir(a, c);
	return a;
}

board put(board a) {
	vector<pair<int, int>> zeros;
	rep(i, j) if (a[i][j] == 0) zeros.push_back({i, j});
	int p = rand() % 100;
	int k = rand() % zeros.size();
	int i = zeros[k].first;
	int j = zeros[k].second;
	int val = (p < 10) ? 4 : 2;
	a[i][j] = val;
	return a;
}

// BEGIN
// Энд функц заралж ашиглаж болно

char play(array<array<int, 4>, 4> board) {
    string str = "LURD";
    return str[rand() % 4];
}

// Энд бичсэн хэсгээ л сервэрт илгээнэ
// END

int main(int argc, char **argv) {
	string token;
	if (argc == 2) token = argv[1];
	srand(247);
	srand(time(0));
	board a; rep(i, j) a[i][j] = 0;

	int itr = 0;
	clock_t begin = clock();
	while (true) {
		char c = play(a);
		if (c != 'U' && c != 'R' && c != 'D' && c != 'L') break;
		board b = move(a, c); 
		if (itr > 0 && b == a) break;
		a = put(b);
		double timer = double(clock() - begin) / CLOCKS_PER_SEC;
		if (timer > 10) break;
		itr++;
	}
	int score = 0;
	rep(i, j) score += a[i][j];
	cout << "Score: " << score << endl;
	cout << "Last state:\n";
	rep(i, j) cout << a[i][j] << " \n"[j == 3];
	double timer = double(clock() - begin) / CLOCKS_PER_SEC;
	cout << "Time: " << (int)timer <<"sec\n";
	return 0;
}
