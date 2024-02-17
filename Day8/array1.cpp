// https://sqrt.mn/tasks/137
#include <iostream>
using namespace std;

int main() {
	int n;     // n айлын тоо
	cin >> n;  // айлын тоог уншиж авлаа
	int a[n];  // n урттай хүснэгт зараллаа
	for (int i = 0; i < n; i++) {
		cin >> a[i]; // тэдгээрийг уншиж авлаа
	}

	int s = 0; 
	for (int i = 0; i < n; i++) {
		s = s + a[i]; // нэмэгдүүлэх аргаар нийлбэрийг нь оллоо
	}
	cout << s << endl;
	return 0;
}