#include <set>
#include <iostream>
using namespace std;

// insert(a)      - a утгыг оруулах                 O(log(n))
// find           - *x == a итератор                O(log(n))
// lower_bound(a) - *x >= a хамгийн бага итератор   O(log(n))
// upper_bound(a) - *x > a хамгийн бага итератор    O(log(n))
// erase          - устгах (өгсөн итертатор)        O(log(n))
// iterator       - Дотороо тоотой бөөрөнхий        
// x++            - дараагийн элемент               O(log(n))
// x--            - өмнөх элеммент                  O(log(n))
// begin()        - хамгийн бага утгатай элемент    O(1)
// end()          - байхгүй элемент                 O(1)
//
// n == 1000000     log(n) == 20   -> 2^20 ~ 1000000

int main() {
	set<int> s;
	set<int>::iterator x;

	s.insert(10);
	s.insert(20); // s set руу элемент оруулах
	s.insert(8);
	s.insert(7);
	s.insert(9);
	s.insert(15);
	cout << s.size() << endl;
	// хайх
	x = s.find(20);
	// cout << x << endl; Error!
	s.erase(x); // устгах
	cout << s.size() << endl;
	s.insert(20);

	x = s.lower_bound(17);
	// 17-оос багагүй хамгийн бага утгатай node
	// (20)
	cout << (*x) << endl;

	x = s.lower_bound(9);
	// 17-оос багагүй хамгийн бага утгатай node
	// (9)
	cout << (*x) << endl;

	x = s.lower_bound(10);
	// 17-оос багагүй хамгийн бага утгатай node
	// (15)
	cout << "Lower bound 10: "<< (*x) << endl;

	x = s.upper_bound(10);
	// 10-с их утгатай хамгийн бага node
	cout << "Upper bound 10: " << (*x) << endl;

	x = s.find(11);
	if (x == s.end()) {
		cout << "11 doesn't exists!\n";
	}

	x = s.upper_bound(100);
	if (x == s.end()) {
		cout << "100s ih element doesn't exists!\n";
	}

	x = s.begin();
	cout << "Min element: " << (*x) << endl;
	s.erase(x);
	x = s.begin();
	cout << "Now min element: " << (*x) << endl;
	s.insert(7);

	// set-ийн бүх элементийг өсөх дааллаар хэвлэх
	for (x = s.begin(); x != s.end(); x++) {
		cout << *x << " ";
	}
	cout << endl;
	x = s.end();
	x--;
	cout << "Max element: " <<(*x) << endl;

	x = s.begin();
	x--;
	if (x == s.end()) {
		cout << "End!\n";
	}
	//
	cout << s.size() << endl;
	s.insert(20); s.insert(7); s.insert(8);
	cout << s.size() << endl;
	// set давхардсан тоонуудын давхардлыг
	// арилгаж хадгалдаг
	s.insert(21);
	cout << s.size() << endl;
	x = s.begin();
	x--;
	x--;
	cout << (*x) << endl;
	return 0;
}