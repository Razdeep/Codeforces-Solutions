// https://codeforces.com/contest/1353/problem/D
#include <iostream>
#include <vector>
#include <queue>
typedef long long ll;
#define int ll
using namespace std;

struct Comparator {
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const{
        int a_len = a.second - a.first;
        int b_len = b.second - b.first;
        if (a_len == b_len) {
            return (a.first > b.first);     // Reverse Polarity
        }
        return a_len < b_len;               // Reverse Polarity
    }
};

signed main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        
        vector<int> arr(n, 0);
        priority_queue<pair<int, int>, vector<pair<int, int> >, Comparator> pq;
        pq.push(make_pair(0, n - 1));
        int cur = 1;

        while (!pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();
            int left  = p.first;
            int right = p.second;

            if (left > right) {
                continue;
            }
            if ((right - left + 1) & 1) {
                int mid = (left + right) / 2;
                arr[mid] = cur++;
                pq.push(make_pair(left, mid - 1));
                pq.push(make_pair(mid + 1, right));
            } else {
                int mid = (left + right - 1) / 2;
                arr[mid] = cur++;
                pq.push(make_pair(left, mid - 1));
                pq.push(make_pair(mid + 1, right));
            }
        }

        for (int it: arr) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
