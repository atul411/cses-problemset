#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[arr1[i]] = i;
    }
    arr2[0] = -1;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int x = arr1[i];
        int y = arr2[x - 1];
        if (y > i) {
            ans++;
        }
    }
    printf("%d", ans);
}