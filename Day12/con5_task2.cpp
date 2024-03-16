// https://sqrt.mn/admin/tasks/202, Гоё тоонууд
#include <bits/stdc++.h>
using namespace std;

bool is_sqr(long long x) {
    long long m = sqrt(x);
    return m * m == x;
}

bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (is_sqr(i) || is_prime(i)) cout << i << ' ';
    }
    cout << endl;
    return 0;
}