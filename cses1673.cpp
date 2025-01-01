#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null nullptr
const double pie = 3.1415926535897932384626;
const ll inf = INT_MAX;
const ll infinite = LLONG_MAX;
const ll mod = (1e+9) + 7;
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define trav(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define vvi vector<vi>
#define vll vector<ll>
#define vvll vector<vll>
#define vf vector<float>
#define vvf vector<vector<float>>
#define vd vector<double>
#define vvd vector<vd>
#define vb vector<bool>
#define pii pair<int, int>
#define vs vector<string>
#define umapii unordered_map<int, int>
#define pll pair<ll, ll>
#define mpii map<int, int>
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define pqdi priority_queue<int>
#define pqii priority_queue<int, vector<int>, greater<int>>
#define rep(i, start, n) for (i = start; i < n; i++)
template <typename T>

void read(vector<T> &arr) {
    for (auto &x : arr) {
        cin >> x;
    }
}

/*
xxxxxxxxxxxx==================================xxxxxxxxxxx
***********code startes from here**************
*/

vector<int> digits(int number) {
    vector<int> arr;
    while (number > 0) {
        arr.push_back(number % 10);
        number /= 10;
    }
    return arr;
}

int main() {
    ll n;
    cin >> n;
    vll dp(n + 1);
    fill_n(&dp[0], n + 1, inf);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i < 10) {
            dp[i] = 1;
            continue;
        }
        vector<int> arr = digits(i);
        for (int j : arr) {
            dp[i] = min(dp[i], dp[i - j] + 1);
        }
    }
    cout << dp[n] << "\n";
}