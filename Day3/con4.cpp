#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    int x = 0;
    cin >> a >> b >> c >> d;
    if (a > 0) {
        x = x + 1;
    }
    if (b > 0) {
        x = x + 1;
    }
    if (c > 0) {
        x = x + 1;
    }
    if (d > 0) {
        x = x + 1;
    }
    cout << x;
    return 0;
}
