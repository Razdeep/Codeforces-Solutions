// https://codeforces.com/contest/1353/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define rall(v) v.rbegin(), v.rend()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        sort(rall(a));
        sort(rall(b));

        int idx = n - 1;
        for (int i = 0; i < k; ++i) {
            if (b[i] > a[idx]) {
                swap(b[i], a[idx]);
                idx--;
            }
        }

        cout << accumulate(a.begin(), a.end(), 0LL) << endl;
    }
    return 0;
}