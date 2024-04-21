#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] + a[r] > k) r--;
        else if (a[l] + a[r] < k) l++;
        else {
            l++; r--; ans++;
        }
    }
    cout << ans << endl;
    return 0;
}