#include <iostream>
using namespace std;

int main() {
	char c, d;
	cin >> c;
	d = c - 32;
	int i = c - 'A'; // хэд дугаар тэмдэгт
	d = 'a' + i;
	cout << d << endl;
	return 0;
}
