#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int a[1000001];
int b[1000001];

void merge_sort(int l, int r) {
	if (l == r) return;
	int m = (l + r) / 2;
	merge_sort(l, m);
	merge_sort(m + 1, r);
	// merge
	int k = 0;
	int i = l, j = m + 1;
	while (i <= m && j <= r) {
		if (a[i] < a[j]) {
			b[k] = a[i]; i++;
		} else {
			b[k] = a[j]; j++;
		}
		k++;
	}
	while (i <= m) {
		b[k] = a[i]; i++; k++;
	}
	while (j <= r) {
		b[k] = a[j]; j++; k++;
	}
	for (int i = 0; i < k; i++) {
		a[l + i] = b[i];
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		// cin >> a[i];
		a[i] = rand();
	}
	auto start = high_resolution_clock::now();
	merge_sort(0, n - 1);
	// sort(a, a + n);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() / 1000000.0 << endl;
	return 0;
}