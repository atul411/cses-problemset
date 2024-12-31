#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> arr;

ll ans = INT_MAX;

void solve(ll n, ll total, ll curr) {
    ans = min(ans, abs(total - 2 * curr));
    if (n < 0) return;
    solve(n - 1, total, curr + arr[n]);
    solve(n - 1, total, curr);
}

int main() {
    ll n, total = 0;
    cin >> n;
    arr.resize(n);
    for (auto &x : arr) {
        cin >> x;
        total += x;
    }
    solve(n - 1, total, 0);
    cout << ans << "\n";
}