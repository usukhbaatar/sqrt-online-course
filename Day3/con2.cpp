#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a != b) {
        if (a > b) {
            a = a - 1;
        } else {
            b = b - 1;
        }
    }

    if (2 * a > b) {
        a = a - 10;
    } else {
        b = b + 10;
    }

    if (2 * b > a) {
        b = b - 10;
    } else {
        a = a + 10;
    }
    
    cout << a << " " << b;
    return 0;
}
