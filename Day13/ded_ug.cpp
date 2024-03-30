#include <string>
#include <iostream>
using namespace std;

const int mod = 1e9 + 7;
const int maxn = 1001;
string s, w;
bool seen[maxn][maxn];
int mem[maxn][maxn];

int dp(int i, int j) { // s[0..(i-1)], w[0..(j-1)]
	if (i > j) return 0;
	if (i == 0) return 1;
	if (seen[i][j]) return mem[i][j];

	int res = dp(i, j - 1);
	if (s[i - 1] == w[j - 1]) {
		res += dp(i - 1, j - 1);
		res %= mod;
	}
	seen[i][j] = true;
	mem[i][j] = res;
	return res;
}

int main() {
	cin >> s >> w;
	cout << dp(s.size(), w.size()) << endl;
	return 0;
}
