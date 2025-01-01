#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>

int main() {
    ll n, k, sum1 = 0, sum2 = 0;
    cin >> n >> k;
    vector<ll> arr(n);

    for (auto &x : arr) cin >> x;

    set<pll> st1, st2;
    vector<ll> ans;
    ll mid = (k - 1) / 2 + 1;
    for (ll i = 0; i < n; i++) {
        if (st1.size() < mid) {
            st1.insert({arr[i], i});
            sum1 += arr[i];
        } else {
            st1.insert({arr[i], i});
            sum1 += arr[i];
            st2.insert(*st1.rbegin());
            sum1 -= (*st1.rbegin()).first;
            sum2 += (*st1.rbegin()).first;
            st1.erase(*st1.rbegin());
        }
        if (st1.size() + st2.size() == k) {
            ll median = (*st1.rbegin()).first;
            ll temp = (median * st1.size() - sum1) + (sum2 - median * st2.size());
            ans.push_back(temp);
            pll element = {arr[i - k + 1], i - k + 1};
            if (st1.count(element)) {
                sum1 -= element.first;
                st1.erase(element);
                if (st2.size()) {
                    sum1 += st2.begin()->first;
                    sum2 -= st2.begin()->first;
                    st1.insert(*st2.begin());
                    st2.erase(st2.begin());
                }
            } else {
                sum2 -= element.first;
                st2.erase(element);
            }
        }
    }
    for (auto i : ans) {
        cout << i << " ";
    }
}