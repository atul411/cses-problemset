#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (auto &a : arr) cin >> a;
    ll dp[x + 1];
    fill_n(dp, x + 1, INT_MAX);
    dp[0] = 0;
    for (ll i = 1; i <= x; i++) {
        for (ll j = 0; j < n; j++) {
            if (i - arr[j] >= 0) {
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
            }
        }
    }
    if (dp[x] == INT_MAX) {
        printf("-1");
    } else {
        cout << dp[x];
    }
}