#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int start = 0, end = n - 1, ans = 0;
    while (start < end) {
        if (arr[start] + arr[end] <= x) {
            ans++;
            start++;
            end--;
        } else {
            end--;
            ans++;
        }
    }
    if (start == end) ans++;
    printf("%d", ans);
}