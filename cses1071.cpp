#include <bits/stdc++.h>
using namespace std;
#define ll long long

enum Direction {
    INCREMENT,
    DECREMENT
};

void solve(ll number, Direction direction, ll x) {
    for (ll i = 0; i < x - 1; i++) {
        if (direction == INCREMENT) {
            number++;
        } else {
            number--;
        }
    }
    cout << number << "\n";
}

void test_case() {
    ll y, x;

    cin >> y >> x;

    if (y >= x) {
        if (y % 2 == 0) {
            solve(y * y, DECREMENT, x);
        } else {
            solve((y - 1) * (y - 1) + 1, INCREMENT, x);
        }
    } else {
        if (x % 2 != 0) {
            solve(x * x, DECREMENT, y);
        } else {
            solve((x - 1) * (x - 1) + 1, INCREMENT, y);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}