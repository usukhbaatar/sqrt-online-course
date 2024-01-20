//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // i тоо байгаа (1, 2, 3, ..., n) аль нэг нь
        // i тоо 3т хуваагддаггүй бол түүнийг хэвлэ
        // үгүй бол хэдэн? * хэвэл
        if (i % 3 != 0) {
            cout << i << endl;
        } else {
            if (i <= 9) {
                cout << "*" << endl;
            } else if (i <= 99) {
                cout << "**" << endl;
            } else {
                cout << "***" << endl;
            }
        }
    }
    return 0;
}