#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 3 != 0) {
        cout << "No";
    } else if (2 * a < b) {
        cout << "No";
    } else if (2 * b < a) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    return 0;
}
