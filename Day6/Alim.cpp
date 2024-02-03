#include <iostream>
using namespace std;

int main() {
	int N, K, C;
	cin >> N >> K >> C;

	int ans = 0;
	for (int i = K; i >= 1; i--) {
		int B = N / i;
		if (C < B) {
			N = N - (i * C);
			ans += C;
		} else {
			N = N - (i * B);
			ans += B;
		}
	}
	cout << ans << endl;
	return 0;
}
