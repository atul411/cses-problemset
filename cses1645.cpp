#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n) {
    vector<int> ans(n);
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] < arr[i]) {
            ans[i] = i;
            continue;
        }
        int curr = ans[i - 1];
        while (curr != 0 and arr[curr - 1] >= arr[i]) {
            curr = ans[curr - 1];
        }
        ans[i] = curr;
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    printf("\n");
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    solve(arr, n);
}