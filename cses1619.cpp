#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0, temp = 0;
    cin >> n;
    vector<pair<int, char>> arr;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, 'x'});
        arr.push_back({y, 'y'});
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].second == 'x') {
            temp++;
        } else {
            temp--;
        }
        ans = max(ans, temp);
    }
    cout << ans << "\n";
}