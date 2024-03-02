#include <set>
#include <iostream>
using namespace std;

int main() {
	multiset<int> s;
	s.insert(10);
	s.insert(10);
	cout << s.size() << endl;
	multiset<int>::iterator x;
	x = s.find(10);
	s.erase(x);
	cout << s.size() << endl;
	return 0;
}
