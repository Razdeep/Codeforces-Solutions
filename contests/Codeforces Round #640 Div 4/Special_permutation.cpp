// https://codeforces.com/contest/1352/problem/G
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        if (n <= 3) {
            cout << -1 << endl;
            continue;
        }
    
        deque<int> dq;
        dq.push_back(1);
        dq.push_back(4);

        for (int i = 2; i <= n; ++i) {
            if (i == 4) {
                continue;
            }
            if (i % 2 == 0) {
                dq.push_back(i);
            } else {
                dq.push_front(i);
            }
        }

        while (!dq.empty()) {
            cout << dq.front() << " ";
            dq.pop_front();
        }

        cout << endl;
    }

    return 0;
}