#include <iostream>
using namespace std;
int main() {
    int d, b, a;
    cin >> d;
    a = 31 - d;
    b = 7;
    b = b + a;
    b = b % 7;
    if (b == 0) {
        b = 7;
    }
    cout << b;
    return 0;
}
