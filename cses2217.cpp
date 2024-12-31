#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[arr1[i]] = i;
    }
    arr1[0] = -1;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int x = arr1[i];
        int y = arr2[x - 1];
        if (y > i) {
            ans++;
        }
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        if (arr2[arr1[x]] < arr2[arr1[x] - 1]) {
            ans--;
        }
        if (arr2[arr1[y]] < arr2[arr1[y] - 1]) {
            ans--;
        }
        swap(arr1[x], arr1[y]);
        arr2[arr1[x]] = x;
        arr2[arr1[y]] = y;
        set<int> st;
        st.insert(arr1[x]);
        st.insert(arr1[y]);
        if (arr1[x] + 1 <= n) {
            st.insert(arr1[x] + 1);
        }
        if (arr1[y] + 1 <= n) {
            st.insert(arr1[y]);
        }
        for (auto i : st) {
            if (arr2[i] < arr2[i - 1]) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}