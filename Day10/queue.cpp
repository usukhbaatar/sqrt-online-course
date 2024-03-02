#include <queue>
#include <iostream>
using namespace std;

int main() {
	queue<int> q; // q={}
	q.push(10); // q={10}
	q.push(20); // q={10, 20}
	q.push(5);  // q={10, 20, 5}
	// элемент ард нь нэмэгдэж ордог
	cout << q.front() << endl; // 10
	if (q.empty()) { // хоосон уу?

	} else {
		cout << "Here!\n";
	}

	q.pop(); // q={20, 5}
	cout << q.front() << endl; // 20
	q.pop(); // q={5}
	q.pop(); // q={}
	// q.pop(); // алдаа!
	if (q.empty()) { // хоосон уу?
		cout << "Here!\n";
	} else {

	}
	return 0;
}
// https://sqrt.mn/tasks/62