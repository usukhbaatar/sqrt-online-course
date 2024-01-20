// for Aziin too
// https://sqrt.mn/tasks/114
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 7 || i % 3 == 0) {
            cout << i << " ";
            x = 1;
        }
    }
    if (x == 0) { // юу ч хэвлээгүй бол
        cout << 0 << endl;
    }
    return 0;
}