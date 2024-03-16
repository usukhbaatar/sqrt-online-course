// https://sqrt.mn/admin/tasks/203, хялбар тоонууд
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i * i <= n) cout << i << ' ';
        else break;
    }
    cout << endl;
    return 0;
}