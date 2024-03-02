#include <map>
#include <iostream>
using namespace std;

int main() {
	map<string, int> m;
	// <key, value>
	m["Test"] = 10;
	m["Hello"] = 20;
	m["Www"] = 10;
	/*
	Test  -> 10
	Hello -> 20
	asdf  -> 10
	*/

	cout << m["Www"] << endl;
	cout << m.size() << endl;

	cout << m["Test"] << endl;
	m["Test"] = 30;
	cout << m["Test"] << endl;

	cout << m.size() << endl;
	m["test"] = 0;
	cout << m.size() << endl;

	// m.insert(make_pair("key", 20));
	// m.lower_bound("asdf");
	return 0;
}