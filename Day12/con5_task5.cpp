// https://sqrt.mn/admin/tasks/200, Өндгөн чихрийн худалдаа
#include <queue>
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    for (int i = 0; i < n; i++) {
        q.push(q.front());
        q.pop();
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}