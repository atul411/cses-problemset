#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n) {
    int sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        printf("NO\n");
        return;
    }

    printf("YES\n");
    vector<int> first, second;
    ll start = 1, end = n;
    if (n % 2 != 0) {
        start = 4;
        first.push_back(1);
        first.push_back(2);
        second.push_back(3);
    }
    while (start < end) {
        first.push_back(start++);
        first.push_back(end--);
        second.push_back(start++);
        second.push_back(end--);
    }
    cout << first.size() << "\n";
    for (auto i : first) {
        cout << i << " ";
    }
    printf("\n");
    cout << second.size() << "\n";
    for (auto i : second) {
        cout << i << " ";
    }
}
int main() {
    ll n;
    cin >> n;
    solve(n);
}