#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// O(log(n)) - ээс хурдан
int gcd(int a, int b) {
	while (a > 0) {
		int x = b % a;
		b = a;
		a = x;
	}
	return b;
}

int lcm(int a, int b) {
	return a / gcd(a, b) * b; // орон халилтаас сэргийлэх
}

// O(b)
int pow(int a, int b, int c) { // (a^b)%c
	long long x = 1; // a^b = (a*a*a*a*...*a) % c
	for (int i = 0; i < b; i++) {
		x = (x * a) % c;
	}
	return x;
}

// O(log(b))
int fastpow(int a, int b, int c) { // (a^b)%c
	vector<int> v;
	while (b > 0) {
		v.push_back(b % 2);
		b = b / 2;
	}
	reverse(v.begin(), v.end());
	long long x = 1;
	for (int i = 0; i < v.size(); i++) {
		x = (x * x) % c;
		if (v[i] == 1) {
			x = (x * a) % c;
		}
	}
	return x;
}

int main() {
	cout <<"gcd(24, 18) = " << gcd(24, 18) << endl;
	cout << "lcm(20, 30) = " << lcm(20, 30) << endl;
	cout << "2^100 % (1000000007): " << pow(2, 100, 1000000007) << endl;
	cout << "2^1000000000 % (1000000007): " << fastpow(2, 1000000000, 1000000007) << endl;
}
