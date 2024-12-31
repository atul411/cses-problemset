#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main() {
    ll n;
    cin >> n;
    vi arr(n);
    for (auto &x : arr) cin >> x;
    ll ans = INT_MIN, curr = 0;
    for (int i = 0; i < n; i++) {
        curr += arr[i];
        ans = max(curr, ans);
        if (curr <= 0) {
            curr = 0;
        }
    }
    printf("%lld", ans);
}