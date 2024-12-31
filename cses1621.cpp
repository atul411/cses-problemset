#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    int last = -1, ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != last) {
            ans++;
            last = arr[i];
        }
    }
    printf("%d", ans);
}