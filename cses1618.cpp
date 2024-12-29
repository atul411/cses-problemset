#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll ans = 0, curr = 1, divBy10 = 0, divBy5 = 0;
    while (pow(10, curr) <= n) {
        divBy10 += (n / pow(10, curr));
        curr++;
    }
    curr = 1;
    while (pow(5, curr) <= n) {
        divBy5 += (n / pow(5, curr));
        curr++;
    }
    divBy5 -= divBy10;
    ans += divBy10 + divBy5;
    cout << ans << "\n";
}

int main() {
    solve();
}