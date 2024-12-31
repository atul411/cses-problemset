#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    ll mx = *max_element(arr.begin(), arr.end());
    sum -= mx;
    if (mx >= sum) {
        cout << 2 * mx << "\n";
    } else {
        cout << (mx + sum) << "\n";
    }
}

int main() {
    solve();
}