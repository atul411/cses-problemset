#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (auto &x : arr) {
        cin >> x;
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.count(x - arr[i])) {
            cout << mp[x - arr[i]] + 1 << " " << i + 1 << "\n";
            return 0;
        }
        mp[arr[i]] = i;
    }
    printf("IMPOSSIBLE");
}