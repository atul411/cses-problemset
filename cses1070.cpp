#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        printf("1\n");
        return;
    }
    if (n < 4) {
        printf("NO SOLUTION");
        return;
    }
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
}

int main() {
    solve();
}