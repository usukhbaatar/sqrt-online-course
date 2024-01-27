#include <iostream>
using namespace std;

int main() {
	int n, x = 0, y = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		// i тоонд 5 аас бага хэдэн цифр
		// i тоон дотор 5 >= хэдэн цифр байгааг тоолно
		int j = i;
		while (j > 0) {
        	int b = j % 10; // сүүлийн цифр
	        if (b < 5) {
	        	x++;
	        } else {
	        	y++;
	        }
	        j = j / 10;     // шилжилт: сүүлийн цифрийг арилгах
	    }
	}
	cout << x << " " << y << endl;
	return 0;
}