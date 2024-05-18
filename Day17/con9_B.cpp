#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long x = 0, y;
    for (int i = 0; i < n; i++) {
        cin >> y;
        if (y % 2 == 1) x += y;
        else x -= y;
    }
    cout << x << endl;
    return 0;
}