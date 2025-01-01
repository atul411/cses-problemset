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

int main() {
    ll n, x, i, j;
    cin >> n >> x;
    vll arr(n);
    read(arr);
    vll dp(x + 1);
    dp[0] = 1;
    rep(i, 1, x + 1) {
        rep(j, 0, n) {
            if (i - arr[j] >= 0) {
                dp[i] = (dp[i] + dp[i - arr[j]]) % mod;
            }
        }
    }
    cout << dp[x];
}