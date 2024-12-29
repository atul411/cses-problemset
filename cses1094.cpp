#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;
    if (n < 2) {
        printf("0\n");
        return;
    }
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            ans += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << ans << "\n";
}

int main() {
    solve();
}