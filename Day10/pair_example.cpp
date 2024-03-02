#include <iostream>
using namespace std;

int main() {
	pair<char, int> p;
	p.first = 'A';
	p.second = 10;
	cout << p.first << ' ' << p.second << endl;
	p.first++;
	cout << p.first << ' ' << p.second << endl;
	p.second--;
	cout << p.first << ' ' << p.second << endl;

	p = make_pair('C', 20);
	cout << p.first << ' ' << p.second << endl;
	pair<int, int> pp;
	pp = p;
	// pp.first = p.first;
	// pp.second = p.second;

	//
	pair<int, pair<int, int>> q;
	q.first = 10;
	q.second.first = 20;
	q.second.second = 30;
	// q = {10, {20, 30}}
	q = make_pair(10, make_pair(20, 30));
	//

	pair<int, int> a, b;
	a = make_pair(10, 20);
	b = make_pair(20, 10);
	if (a < b) {
		cout << "a < b" << endl;
	} else {
		cout << "not a < b" << endl;
	}
	return 0;
}