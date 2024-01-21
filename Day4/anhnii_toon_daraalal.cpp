#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // ? i тоо анхны тоо мөн үү?
        int c = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                c++;
            }
        }
        if (c == 2){
            cout << i << " ";
        }
    }
    return 0;
}