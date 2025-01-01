#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (auto &x : arr) cin >> x;

    set<pii> st1, st2;
    int mid = (k - 1) / 2 + 1;
    for (int i = 0; i < n; i++) {
        if (st1.size() < mid) {
            st1.insert({arr[i], i});
        } else {
            st1.insert({arr[i], i});
            st2.insert(*st1.rbegin());
            st1.erase(*(st1.rbegin()));
        }
        if (st1.size() + st2.size() == k) {
            cout << st1.rbegin()->first << " ";
            if (st1.count({arr[i - k + 1], i - k + 1})) {
                st1.erase({arr[i - k + 1], i - k + 1});
                if (st2.empty() == false) {
                    st1.insert(*st2.begin());
                    st2.erase(st2.begin());
                }
            } else {
                st2.erase({arr[i - k + 1], i - k + 1});
            }
        }
    }
}