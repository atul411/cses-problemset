#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void test_case() {
    string str;
    cin >> str;
    vi arr(26);
    /*
        1. count frequency of each letter of there can be
        (at max) 1 letter with odd frequency which we can place
        in middle.
        2. if more than one have odd frequency then no solution exist.
        3. take two strings a and b, add chars in a and b the return a + reverse(b);
    */

    // step 1.
    for (auto ch : str) {
        arr[ch - 'A']++;
    }

    // step 2
    int oddFreqCount = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] % 2 != 0) oddFreqCount++;
    }
    if (oddFreqCount > 1) {
        printf("NO SOLUTION");
        return;
    }

    // step 3
    string a, b, oddChar;
    for (int i = 0; i < 26; i++) {
        while (arr[i] >= 2) {
            a.push_back('A' + i);
            b.push_back('A' + i);
            arr[i] -= 2;
        }
        if (arr[i] == 1) {
            oddChar.push_back('A' + i);
            arr[i]--;
        }
    }
    a += oddChar;
    reverse(b.begin(), b.end());
    cout << (a + b);
}

int main() {
    test_case();
}