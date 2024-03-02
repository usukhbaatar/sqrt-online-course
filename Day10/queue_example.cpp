// https://sqrt.mn/tasks/62
#include <queue>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (q.size() > 1) {
		q.push(q.front());
		q.pop(); q.pop();
	}
	cout << q.front() << endl;
	return 0;
}