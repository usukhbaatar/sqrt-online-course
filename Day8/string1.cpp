// https://cplusplus.com/reference/string/string/


#include <string>
#include <iostream>
using namespace std;


int main() {
	string s, w, q;
	s = "Hello";
	w = "World";

	/*
		1. s[0]('H'), s[1]('e'), ... тэмдэгтүүд / array
		2. s.size() == 5  -> тухайн тэмдэгт мөрийн урт
		3. 
	*/

	q = s; // q = "Hello"; утга оноож болно
	q = q + ','; // Hello,    тэмдэгт нэмж болно
	q = q + " " + w;    // тэмдэгт мөрүүдийг залгах
	q.push_back('!'); // q = q + '!'; тэмдэгт залгах
	cout << q << '\n'; // хэвлэх

	cout << "sqrt.mn\n";
	return 0;
}