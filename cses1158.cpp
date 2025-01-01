#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vvll vector<vll>

void read(vector<ll> &arr) {
    for (auto &x : arr) cin >> x;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> prices(n), pages(n);
    read(prices);
    ll ans = 0;
    read(pages);
    vvll dp(n + 1, vll(x + 1));
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= x; j++) {
            if (j >= prices[i - 1]) {
                dp[i][j] = max(dp[i - 1][j - prices[i - 1]] + pages[i - 1], dp[i][j]);
            }
            dp[i][j] = max(dp[i - 1][j], dp[i][j]);
        }
    }
    cout << dp[n][x];
}

int main() {
    solve();
}