#include <stack>
#include <iostream>
using namespace std;

// нээсэн хаалт мөн үү?
bool open(char c) {
	if (c == '(' || c == '[' || c == '{')
		return true;
	else
		return false;
}

// нээсэн болон хаасан хаалт адилхан уу?
bool equal(char a, char b) {
	if (a == '(' && b == ')')
		return true;
	else if (a == '[' && b == ']')
		return true;
	else if (a == '{' && b == '}')
		return true;
	else
		return false;
}

int main() {
	string s;
	cin >> s;
	stack<char> st;
	for (int i = 0; i < s.size(); i++) {
		if (open(s[i])) { // нээсэн хаалт бол хадгалах
			st.push(s[i]);
		} else { // хаасан хаалт бол
			if (st.empty()) { // нээсэн хаалт олдоогүй
				cout << "NO" << endl;
				return 0;
			}
			char last = st.top();
			if (equal(last, s[i])) { // тохирох уу?
				st.pop(); // хураах
			} else { // тохироогүй [)
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	if (st.empty()) { // бүгд хураагдаад дууссан
		cout << "YES" << endl;
	} else { // хураагдаагүй хаалт үлдсэн
		cout << "NO" << endl;
	}
	return 0;
}