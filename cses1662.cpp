#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, sum = 0, curr = 0, ans = 0;
    cin >> n;

    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;

    map<ll, ll> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++) {
        curr += arr[i];
        ans += mp[curr % n];
        ans += mp[curr % n - n];
        ans += mp[curr % n + n];
        mp[curr % n]++;
    }
    printf("%lld", ans);
}