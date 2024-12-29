#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    int ans = 1, curr = 1;
    cin >> str;
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == str[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }
        ans = max(ans, curr);
    }
    printf("%d", ans);
}

int main() {
    solve();
}