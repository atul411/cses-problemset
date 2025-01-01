#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(int a, int b) {
    ll dp[a + 1][b + 1];
    fill_n(&dp[0][0], (a + 1) * (b + 1), INT_MAX);
    for (int i = 1; i <= a; i++) {
        dp[i][1] = i - 1;
    }
    for (int i = 1; i <= b; i++) {
        dp[1][i] = i - 1;
    }
    for (int i = 2; i <= a; i++) {
        for (int j = 2; j <= b; j++) {
            if (i == j) {
                dp[i][j] = 0;
            }
            for (int k = 1; k < j; k++) {
                dp[i][j] = min(dp[i][j - k] + 1 + dp[i][k], dp[i][j]);
            }
            for (int k = 1; k < i; k++) {
                dp[i][j] = min(dp[i - k][j] + 1 + dp[k][j], dp[i][j]);
            }
        }
    }
    return dp[a][b];
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << solve(a, b);
}