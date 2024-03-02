#include <stack>
#include <iostream>
using namespace std;

int main() {
	// хамгийн шинэ нь гардаг өгөгдлийн бүтэц

	stack<int> st;
	st.push(10); // st={10}
	st.push(20); // st={10, 20}
	st.push(5);  // st={10, 20, 5}

	if (st.empty()) { // хоосон уу?

	} else {
		cout << "Here!" << endl;
	}

	cout << st.top() << endl; // 5
	st.pop(); // st={10, 20}
	cout << st.top() << endl; // 20
	st.pop(); // st={10}
	st.pop(); // st={}
	// st.pop(); // Ажиллах үеийн алдаа
	if (st.empty()) { // хоосон уу?
		cout << "Here!" << endl;
	} else {

	}
}

/*
()([])[({[()()]})[]] -> зөв хаалт
([)] -> буруу хаалт
)()( -> буруу хаалт
(((())) -> буруу хаалт

Тэгвэл өгөгдсөн хаалтууд зөв үү?
*/
