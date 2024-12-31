#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>

int main() {
    ll n, sum = 0, curr = 0;
    cin >> n;
    vector<pll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
        sum += arr[i].second;
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        curr += arr[i].first;
        sum -= curr;
    }
    cout << sum << "\n";
}