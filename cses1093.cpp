#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null nullptr
const double pie = 3.1415926535897932384626;
const ll inf = INT_MAX;  // Very big number
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
void read(vector<T>& arr) {
    for (auto& x : arr) {
        cin >> x;
    }
}

string upper_case(string str) {
    for (auto& ch : str) {
        ch = toupper(ch);
    }
    return str;
}

string lower_case(string str) {
    for (auto& ch : str) {
        ch = tolower(ch);
    }
    return str;
}

bool is_prime(ll n) {
    if (n < 4) return true;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

vector<int> shieve(int n) {
    vector<bool> arr(n + 1, true);
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (arr[i] == false) continue;
        for (int j = 2; j * i <= n; j++) {
            arr[i * j] = false;
        }
    }
    vector<int> ans;
    for (int i = 0; i <= n; i++) {
        if (arr[i] == true) {
            ans.push_back(i);
        }
    }
    return ans;
}

/*
====================================
*/

void solve(ll n) {
    ll sum = n * (n + 1) / 2;
    if (sum % 2) {
        printf("0");
        return;
    }
    sum /= 2;
    vvll dp(n + 1, vll(sum + 1));
    ll i, j;
    rep(i, 0, n) {
        dp[i][0] = 1;
    }
    rep(i, 1, n) {
        rep(j, 1, sum + 1) {
            if (j >= i) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - i]) % mod;
            }
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
        }
    }
    ll ans = dp[n-1][sum];
    cout << ans << "\n";
}

int main() {
    ll n;
    cin >> n;
    if (n <= 2) {
        printf("0");
        return 0;
    }
    solve(n);
}
