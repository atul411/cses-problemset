#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>

int main() {
    string given, target;
    cin >> given >> target;
    int n = given.size(), m = target.size();
    vvi dp(n + 1, vi(m + 1));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int i = 0; i <= m; i++) {
        dp[0][i] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (given[i - 1] == target[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}) + 1;
            }
        }
    }
    cout << dp[n][m];
}