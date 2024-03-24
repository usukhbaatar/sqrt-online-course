#include <iostream>
using namespace std;

const int mod = 1e9 + 7; // 1000000007
const int maxn = 1e5 + 1; // 100000

bool seen_a[maxn];
bool seen_b[maxn];
int mem_a[maxn];
int mem_b[maxn];

int a(int); // функц зарлах
int b(int); // функц зарлах

int a(int n) {
	if (n == 1) return 1;
	if (seen_a[n]) return mem_a[n];

	mem_a[n] = b(n - 1);
	seen_a[n] = true;
	return mem_a[n];
}

int b(int n) {
	if (n == 1) return 1;
	if (seen_b[n]) return mem_b[n];

	mem_b[n] = (a(n - 1) + b(n - 1)) % mod;
	seen_b[n] = true;
	return mem_b[n];
}

int main() {
	int n; cin >> n;
	cout << (a(n) + b(n)) % mod << endl;
	return 0;
}