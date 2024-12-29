#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case(ll number) {
    printf("%lld ", number);
    if (number == 1) {
        return;
    }
    if (number % 2 == 0) {
        return test_case(number / 2);
    }
    return test_case(3 * number + 1);
}

int main() {
    ll number;
    cin >> number;
    test_case(number);
}