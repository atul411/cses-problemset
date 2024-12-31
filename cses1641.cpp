#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>

int main() {
    ll n, sum = 0, start, end;
    cin >> n >> sum;
    vector<pll> arr(n);
    for (ll i = 1; i <= n; i++) {
        cin >> arr[i - 1].first;
        arr[i - 1].second = i;
    }
    sort(arr.begin(), arr.end());
    for (ll i = 0; i < n; i++) {
        ll remaining = sum - arr[i].first;
        start = 0, end = i - 1;
        while (start < end) {
            ll currSum = arr[start].first + arr[end].first;
            if (currSum == remaining) {
                printf("%lld %lld %lld", arr[start].second, arr[end].second, arr[i].second);
                return 0;
            } else if (currSum > remaining) {
                end--;
            } else {
                start++;
            }
        }
    }

    printf("IMPOSSIBLE");
}