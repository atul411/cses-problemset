#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>

int main() {
    ll n;
    cin >> n;
    vector<pll> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i].first >> arr1[i].second;
    }
    vector<pll> arr2 = arr1;

    sort(arr1.begin(), arr1.end(), [](pll a, pll b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    });
    map<pll, pll> mp;  // first containing second contained
    pll curr = arr1[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr1[i].first <= curr.first and arr1[i].second >= curr.second) {
            mp[arr1[i]].first += mp[curr].first + 1;
        }
        curr = arr1[i];
    }
}