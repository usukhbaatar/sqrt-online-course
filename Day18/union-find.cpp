#include <iostream>
using namespace std;

int n;
int p[100001];
// p[i] - i дугаар нөдийн эцэг нөдийн дугаар

int Find(int x) {
	if (p[x] == x) return x;
	int y = Find(p[x]);
	p[x] = y; // сайжруулалт
	return y;
}

void Union(int x, int y) {
	int a = Find(x);
	int b = Find(y);
	if (a == b) return;
	p[b] = a;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		p[i] = i;
	}
	int q;
	cin >> q;
	while (q--) {
		int c; cin >> c;
		if (c == 1) {
			int x, y; cin >> x >> y;
			Union(x, y);
		} else {
			int x, y; cin >> x >> y;
			if (Find(x) == Find(y)) cout << "Yes\n";
			else cout << "No\n";
		}
	}
}