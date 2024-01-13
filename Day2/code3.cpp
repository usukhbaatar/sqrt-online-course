// a, b хоёр тоо өгнө. Ихийг нь хэвлэ

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b; // a = 5, b = 5

	if (a < b) {   // false
		c = a;     // 
	} else {       // true
		c = b;     // c = 5
	}
	cout << c;     // 5
	return 0;
}
