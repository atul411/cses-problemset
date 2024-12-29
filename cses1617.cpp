#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

long long solve(long long n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n % 2 == 0) {
        long long x = solve(n / 2);
        return ((x % mod) * (x % mod)) % mod;
    }
    long long x = solve(n / 2);
    return (2 * ((x % mod) * (x % mod)) % mod) % mod;
}

int main() {
    long long n;
    cin >> n;
    cout << solve(n);
}