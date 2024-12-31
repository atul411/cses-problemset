#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> positions(n);
    for (int i = 0; i < n; ++i) {
        cin >> positions[i];
    }

    set<int> lights;
    multiset<int> lengths;
    lights.insert(0);
    lights.insert(x);
    lengths.insert(x);

    for (int i = 0; i < n; ++i) {
        int p = positions[i];
        auto it = lights.upper_bound(p);
        int right = *it;
        int left = *(--it);
        lengths.erase(lengths.find(right - left));
        lengths.insert(p - left);
        lengths.insert(right - p);
        lights.insert(p);
        cout << *lengths.rbegin() << " ";
    }

    return 0;
}