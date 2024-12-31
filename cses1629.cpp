#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main() {
    int n, x, y;
    cin >> n;
    vector<pii> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), [](pii a, pii b) {
        return a.second < b.second;
    });
    vector<pii> arr2;
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i].first >= last) {
            arr2.push_back(arr[i]);
            last = arr[i].second;
        }
    }
    cout << arr2.size() << "\n";
}