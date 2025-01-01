#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<vector<bool>> arr(n, vector<bool>(n, true));
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++) {
            if (str[j] == '*') {
                arr[i][j] = false;
            }
        }
    }
    if (arr[0][0] == false) {
        printf("0\n");
        return 0;
    }
    vector<vector<ll>> ans(n, vector<ll>(n, 0));
    ans[0][0] = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i][0]) {
            ans[i][0] = ans[i - 1][0];
        }
        if (arr[0][i]) {
            ans[0][i] = ans[0][i - 1];
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[i][j] == false) {
                arr[i][j] = 0;
                continue;
            }
            ans[i][j] = (ans[i - 1][j] + ans[i][j - 1])%mod;
        }
    }
    cout << ans[n - 1][n - 1];
}