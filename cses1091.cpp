#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m;
    vector<int> arr2(m);
    multiset<int> st;
    for (int i = 0; i < n; i++) {
        cin >> x;
        st.insert(x);
    }

    for (auto &x : arr2) cin >> x;

    for (int i = 0; i < m; i++) {
        if (st.empty() or arr2[i] < *st.begin()) {
            printf("-1\n");
            continue;
        }
        int temp = arr2[i];
        auto lower = st.lower_bound(temp);
        if (*lower == temp) {
            cout << temp << "\n";
            st.erase(lower);
        } else {
            --lower;
            printf("%d\n", *lower);
            st.erase(lower);
        }
    }
}