#include <vector>
#include <iostream>
using namespace std;

int main() {
	// int төрлийг олон өгөгдөл хадгалах
	// v нэртэй хоосон vector зараллаа
	vector<int> v; // {1, 2, 7, 3}
	vector<string> vs; // {"asdf", "asdf"}
	//
	vector<int> q(10); // хэмжээ
	// int q[10]; адилхан
	// q[0], q[1], ..., q[9]
	vector<int> p(10, 0);
	//p={0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	p.push_back(20); // элемент нэмэх
	//p={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20}
	
	cout << p.size() << endl; // 11
	// хэмжээ олох
	p.clear(); // цэвэрлэх
	// p={}
	p.push_back(10);
	// p={10}
	p.push_back(20);
	// p={10, 20}
	p.push_back(30);
	// p={10, 20, 30}
	cout << p.size() << endl; // 3
	cout << p[0] << endl; // 10
	cout << p[1] << endl; // 20
	cout << p[2] << endl; // 30
	// p={10, 20, 30}
	p.pop_back();
	// p={10, 20}

	q = p;
	// q={10, 20}

	int a[10];
	// a[i] ->

	vector<int> A[3];
	// A[0] -> vector
	// A[1] -> vector
	// A[2] -> vector
	// A -> 2D Array

	int B[3][10]; // 2D Array
	
	A[0] = // {1, 2, 3} -> object;
	// A[0][1] --> 2
	// A[0].size() == 3
	A[1] = {1, 2}
	A[2] = {1, 2, 5, 4, 3}

	// B[0] -> 10 урттай
	// B[1] -> 10 урттай

	// iterator
	// v = {O, O, O, O}
	// v.begin() -> эхлний элементийн хаяг
	// v.end() -> сүүлийн элементийн дараагийн хаяг

	// sort(a, a + n);
	sort(v.begin(), v.end()); // эрэмбэлэх
	// v = {1, 3, 5, 7};
	reverse(v.begin(), v.end()) // тонгорох
	// v = {7, 5, 3, 1};

	// https://cplusplus.com/reference/vector/vector/

	if (p < q) { // харьцуулах

	}

	q = {1, 4, 3, 9}
	p = {2, 0, 0}
	// p их
	// lexicographical order
	swap(p, q);
	q = {2, 0, 0}
	p = {1, 4, 3, 9}
}
