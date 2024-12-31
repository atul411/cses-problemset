#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void solve(string curr, string str, int n) {
    if (curr.size() == n) {
        ans.push_back(curr);
        return;
    }
    vector<int> arr(26, false);
    for (auto i = 0; i < str.size(); i++) {
        if (arr[str[i] - 'a'] == false) {
            string temp = str.substr(0, i) + str.substr(i + 1);
            arr[str[i] - 'a'] = true;
            solve(curr + str[i], temp, n);
        }
    }
}

int main() {
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    solve("", str, str.size());
    cout << ans.size() << "\n";
    for (auto i : ans) {
        cout << i << "\n";
    }
}