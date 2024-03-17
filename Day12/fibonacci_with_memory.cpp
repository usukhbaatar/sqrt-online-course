// Written by General LG
#include <iostream>
using namespace std;

bool seen[31];
int memory[31];

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    if (seen[n]) return memory[n];
    memory[n] = fibonacci(n - 1) + fibonacci(n - 2);
    seen[n] = true;

    return memory[n];
}

int main() {
    int n; cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
