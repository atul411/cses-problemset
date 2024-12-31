#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) {
        cin >> x;
    }
    set<int> st;
    int start = 0, end = 0, ans = 0;
    while (end < n) {
        while (st.count(arr[end])) {
            st.erase(arr[start]);
            start++;
        }
        st.insert(arr[end]);
        ans = max(ans, end - start + 1);
        end++;
    }

    printf("%d", ans);
}