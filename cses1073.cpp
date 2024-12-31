#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (ans.empty() or ans.back() <= x) {
            ans.push_back(x);
        } else {
            int idx = upper_bound(ans.begin(), ans.end(), x) - ans.begin();
            ans[idx] = x;
        }
    }
    cout << ans.size() << "\n";
}