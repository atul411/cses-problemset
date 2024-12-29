#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int p, q;
    cin >> p >> q;
    if (p == 0 and q == 0) {
        printf("YES\n");
        return;
    } else if (p == 0 or q == 0 or (p + q) % 3 != 0) {
        printf("NO\n");
        return;
    }
    if (p <= q) {
        swap(p, q);
    }
    if (p <= 2 * q) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}