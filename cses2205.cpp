#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<string> l1 = {"0", "1"};
    vector<string> l2;
    vector<string> l3;
    for (int i = 0; i < n; i++) {
        l2.insert(l2.end(), l1.rbegin(), l1.rend());
        for (auto i : l2) {
            l3.push_back("1" + i);
        }
        for (auto i : l1) {
            l3.push_back("0" + i);
        }
        l2.clear();
        l1.clear();
        l1.insert(l1.end(), l3.begin(), l3.end());
        l3.clear();
    }
    for (auto i : l1) {
        cout << i << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    solve(n - 1);
}