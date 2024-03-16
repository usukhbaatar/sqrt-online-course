// https://sqrt.mn/admin/tasks/199, Анхны тоон нийлбэр
#include <iostream>
using namespace std;

bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int lower_prime(int x) {
    // p <= x p : max prime
    while (x >= 1) {
        if (is_prime(x)) return x;
        x--;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    while (n > 1) {
        int p = lower_prime(n);
        cout << p << endl;
        n = n - p;
    }
    cout << n << endl;
    return 0;
}
