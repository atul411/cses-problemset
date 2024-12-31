#include <bits/stdc++.h>
using namespace std;

struct User {
    int start, end, id, roomNumber;
};

struct Comprator {
    bool operator()(const User a, const User b) const {
        return a.end > b.end;
    }
};

int main() {
    int n;
    cin >> n;
    vector<User> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].start >> arr[i].end;
        arr[i].id = i;
    }

    sort(arr.begin(), arr.end(), [](User a, User b) {
        return a.start < b.start;
    });
    stack<int> st;
    int roomCount = 0;
    priority_queue<User, vector<User>, Comprator> pq;
    vector<int> roomAllocated(n);
    for (int i = 0; i < n; i++) {
        while (!pq.empty() && pq.top().end < arr[i].start) {
            auto front = pq.top();
            pq.pop();
            st.push(front.roomNumber);
        }
        if (!st.empty()) {
            auto top = st.top();
            st.pop();
            pq.push(User{arr[i].start, arr[i].end, arr[i].id, top});
            roomAllocated[arr[i].id] = top;
        } else {
            pq.push(User{arr[i].start, arr[i].end, arr[i].id, ++roomCount});
            roomAllocated[arr[i].id] = roomCount;
        }
    }

    cout << roomCount << "\n";
    for (auto room : roomAllocated) {
        cout << room << " ";
    }
    cout << "\n";

    return 0;
}