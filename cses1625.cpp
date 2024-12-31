#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ans = 0;

vector<vector<int>> visited(7, vector<int>(7, false));
bool issafe(int row, int col) {
    if (row < 0 or row > 6 or col < 0 or col > 6 or visited[row][col]) {
        return false;
    }
}
void test_case(string& str, int row, int col) {
    if (row == 6 and col == 0) {
        ans++;
        return;
    }
    int index = row * 7 + col;
    if (str[index] == 'U') {
        visited[row][col] = true;
        int r = row - 1, c = col;
        if (issafe(r, c)) {
            test_case(str, r, c);
        }
    } else if (str[index] == 'D') {
        visited[row][col] = true;
        int r = row + 1, c = col;
        if (issafe(r, c)) {
            test_case(str, r, c);
        }
    } else if (str[index] == 'L') {

    }
}

void solve() {
    string str;
    cin >> str;
    test_case(str, 0, 0);
}
int main() {
    solve();
}