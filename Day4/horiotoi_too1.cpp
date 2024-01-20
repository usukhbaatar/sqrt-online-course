//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0) {
            cout << i << endl;
        } else {
            // i тооны оронгийн тоог ол
            int c = 0; // i = 1232
            for (int j = i; j > 0; j = j / 10) {
                c++;
            }
            for (int j = 0; j < c; j++) { // c удаа
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}