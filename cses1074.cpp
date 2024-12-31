#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    long long median = arr[n / 2], ans = 0;
    for (auto x : arr) {
        ans += abs(x - median);
    }
    printf("%lld", ans);
}