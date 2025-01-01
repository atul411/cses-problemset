#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, sum;
    ll curr = 0, ans = 0;
    ll start = 0, end = 0;
    cin >> n >> sum;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;
    while (end < n) {
        curr += arr[end++];
        while (curr > sum) {
            curr -= arr[start];
            start++;
        }
        if (curr == sum) {
            ans++;
        }
    }
    printf("%lld", ans);
}