#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    ll sum = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > sum) {
            printf("%lld", sum);
            return 0;
        }
        sum += arr[i];
    }
    printf("%lld", sum);
}