#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        printf("1");
        return 0;
    }
    queue<int> q1, q2;
    for (int i = 1; i <= n; i++) {
        q1.push(i);
    }
    bool print = false;
    while (q1.size() or q2.size()) {
        while (q1.size()) {
            auto front = q1.front();
            q1.pop();
            if (print) {
                cout << front << " ";
                print = false;
            } else {
                print = true;
                q2.push(front);
            }
        }

        while (q2.size()) {
            auto front = q2.front();
            q2.pop();
            if (print) {
                cout << front << " ";
                print = false;
            } else {
                print = true;
                q1.push(front);
            }
        }
    }

    return 0;
}