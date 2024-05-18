#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int dy[] = {-1, 1, 2, 2, 1, -1, -2, -2};
const int dx[] = {-2, -2, -1, 1, 2, 2, 1, -1};

int n, m, a, b, x, y, k;
int dp[1001][1001];

int32_t main() {
    cin >> n >> m;
    cin >> a >> b;
    cin >> x >> y;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int ii, jj;
        cin >> ii >> jj;
        dp[ii][jj] += -1;
    }
    dp[a][b] = 1;
    queue<pair<int, int>> q;
    q.push({a, b});
    bool done = 0;
    while (!q.empty() && !done) {
        a = q.front().first;
        b = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int aa = a + dx[i];
            int bb = b + dy[i];
            if (aa < 0 || aa >= n) continue;
            if (bb < 0 || bb >= m) continue;
            if (dp[aa][bb] != 0) continue;
            dp[aa][bb] = dp[a][b] + 1;
            if (aa == x && bb == y) {
                done = 1;
                break;
            }
            q.push({aa, bb});
        }
    }
    if (dp[x][y] == 0) cout << -1 << endl;
    else cout << dp[x][y] / 2 << endl;

    return 0;
}