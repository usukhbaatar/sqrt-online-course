
1. Хоёр хувьсагчийн утгыг соль
```cpp
#include <iostream>
using namespace std;

int main() {
  int a = 5, b = 4;
  int c;
  
  c = a;
  a = b;
  b = c;
  
  cout << a << ' ' << b;
  return 0;
}
```

2. Өгсөн a, b хоёр тоог эрэмбэл
```cpp
#include <iostream>
using namespace std;

int main() {
	int a, b;
	int c;
	cin >> a >> b;
	if (a > b) { // хэрэвээ эрэмбэгүй бол
		// соль
		c = a; // c=10
		a = b; // a=7
		b = c; // b=10
	}
	cout << a << ' ' << b;
	return 0;
}
```
3. Өгсөн a, b, c гурван тоог эрэмбэл
```cpp
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int x;
	cin >> a >> b >> c;
	// 1. (a, b) erembel
	if (a > b) {
		x = a;
		a = b;
		b = x;
	}
	// 2. (b, c) erembel
	if (b > c) {
		x = b;
		b = c;
		c = x;
	}
	// 3. (a, b) erembel
	if (a > b) {
		x = a;
		a = b;
		b = x;
	}
	cout << a << " " << b << " " << c;
	return 0;
}
```
4. a, b, c, d дөрвөн тоог эрэмбэл.
