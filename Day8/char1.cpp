#include <iostream>
using namespace std;

int main() {
	char c;
	int i;
	
	cin >> c; // тэмдэгт авах яагаад гэвэл c: char төрөл учир
	i = (int) c;
	cout << i << endl; // тоо хэвлэнэ яагаад гэвэл i: int төрөл

	cin >> i; // тоо авах яагаад гэвэл i: int төрөл учир
	c = (char) i;
	cout << c << endl; // тэмдэгт хэвлэнэ яагаад гэвэл c: char төрөл

	c = '!';               // 33
	c = c * 2;             // 66
	cout << c << endl;     // B

	c = c + 1;             // 67
	cout << c << endl;     // C
	return 0;
}
