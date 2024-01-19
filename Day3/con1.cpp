#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    int x, y, z, t;
    x = a - c;
    y = b - d;
    z = c - a;
    t = d - b;
    if (x == y) {
        cout << "YES" ;
    } else if (x == t) {
        cout << "YES" ;
    } else if (z == y) {
        cout << "YES" ;
    } else if (z == t) {
        cout << "YES" ;
    } else {
        cout << "NO" ;
    }
}