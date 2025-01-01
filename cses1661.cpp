#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, sum, curr = 0, ans = 0;
    cin >> n >> sum;
    vector<ll> arr(n);
    for (auto &a : arr) cin >> a;
    map<ll, ll> mp;
    mp[0] = 1;
    for (auto i = 0; i < n; i++) {
        curr += arr[i];
        ans += mp[curr - sum];
        mp[curr]++;
    }
    printf("%lld", ans);
}