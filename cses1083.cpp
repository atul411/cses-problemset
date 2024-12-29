#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, sum = 0, temp;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> temp;
        sum += i - temp;
    }
    cout << sum + n << "\n";
}

int main() {
    solve();
}