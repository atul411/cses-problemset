#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>

void solve() {
    int n;
    cin >> n;
    vector<pll> arr1(n), arr2;
    map<pll, pll> mp;  // first is overlapping, second is overlapped
    for (int i = 0; i < n; i++) {
        cin >> arr1[i].first >> arr1[i].second;
        mp[arr1[i]] = {0, 0};
    }
    arr2 = arr1;
    sort(arr1.begin(), arr1.end(), [](pll a, pll b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second > b.second;
    });
    stack<pll> st;
    for (int i = 0; i < arr1.size(); i++) {
        if (st.empty()) {
            st.push(arr1[i]);
            continue;
        }
        while (st.size() and st.top().first <= arr1[i].first and st.top().second >= arr1[i].second) {
            auto top = st.top();
            st.pop();
            mp[top].first = 1;
        }
        st.push(arr1[i]);
    }

    while (st.size()) {
        st.pop();
    }

    for (int i = 0; i < arr1.size(); i++) {
        if (st.empty()) {
            st.push(arr1[i]);
            continue;
        }
        if (st.size() and st.top().first <= arr1[i].first and st.top().second >= arr1[i].second) {
            mp[arr1[i]].second = 1;
        } else {
            st.push(arr1[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << mp[arr2[i]].first << " ";
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        cout << mp[arr2[i]].second << " ";
    }
}

int main() {
    solve();
}