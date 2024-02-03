#include <iostream>
using namespace std;

// a, b хоёр тооны ихийг олж буцаагаарай
int max(int a, int b) {
	int c;
	if (a > b) {
		c = a;
	} else {
		c = b;
	}
	return c;
}

// a, b хоёр тооны багыг олж буцаагаарай
int min(int a, int b) {
	int c;
	if (a < b) {
		c = a;
	} else {
		c = b;
	}
	return c;
}

// a, b, c гурван тооны багыг олж буцаагаарай
int min3(int a, int b, int c) {
	int d = min(a, b);
	return min(d, c);
}

// a, b, c гурван тооны ихийг олж буцаагаарай
int max3(int a, int b, int c) {
	// a, b, c : local valriable
	return max(max(a, b), c);
}

// a, b, c гурван тооны утгаараа дундах тоог олж буцаагаарай
// 2 1 3 -> дундах нь 2
int mid(int a, int b, int c) {
	// a, b, c -> parameters : local variable
	int x = max3(a, b, c); // 3
	int y = min3(a, b, c); // 1
	return a + b + c - x - y; // 2
}

// a, b, c гурван тооны дунджийг олж буцаана.
double average(int a, int b, int c) {
	return (double)(a + b + c) / 3;
}

// хоёр хувьсагчийн утгыг сольдог үйлдэл
void swap(int &a, int &b) {
	int x;
	x = a;
	a = b;
	b = x;
}

// a, b хоёр хувьсагчийг эрэмбэлдэг процедур бичээрэй
void sort2(int &a, int &b) {
	if (a > b) {
		swap(a, b);
	}
}

// өгсөн гурван тоог эрэмбэл
void sort3(int &a, int &b, int &c) {
	sort2(a, b);
	sort2(b, c);
	sort2(a, b);
}

// n тооны хуваагчдийн тоог ол
int div(int n) {
	int c = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			c++;
		}
	}
	return c;
}

// n тоо анхны тоо бол true, үгүй бол false утга буцаана
bool isprime(int n) {
	// анхны тоо бол яг 2 хуваагчтай тоо
	if (div(n) == 2) {
		return true;
	} else {
		return false;
	}
}

// тооны хөвүүлсэн тоог олдог
int rev(int n) {
	int m = 0;
	while (n > 0) {
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return m;
}

// n тоо палиндром тоо бол true, үгүй бол false утга буцаана
bool ispalindrome(int n) {
	// ард урдаасаа адилхан уншигддаг тоо
	// хөрвүүлсэн тоотойгоо тэнцүү тоо
	// 122 -> 221 : false
	// 1331 -> 1331 : true
	int m = rev(n);
	if (n == m) {
		return true;
	} else {
		return false;
	}
}

// тухайн тоо сөрөг бол эерэг болгож өгдөг
int abs(int x) {
	if (x >= 0) return x;
	else return -1 * x;
}

// (a, b) -> (c, d) морь нэг нүүгээд очиж чадах уу
bool check(int a, int b, int c, int d) {
	int x = abs(a - c); // зөрөө
	int y = abs(b - d); // зөрөө
	if (x == 2 && y == 1) {
		return true;
	}
	if (x == 1 && y == 2) {
		return true;
	}
	return false;
}

// тооны цифрүүдийн нийлбэр олдог
int sum(long long x) {
	int s = 0;
	while (x > 0) {
		s = s + x % 10;
		x = x / 10;
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (ispalindrome(i) and isprime(i)) {
			cout << i << endl;
		}
	}
	return 0;
}
