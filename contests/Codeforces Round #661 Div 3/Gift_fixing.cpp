// https://codeforces.com/contest/1399/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        int min_a = INT_MAX;
        int min_b = INT_MAX;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            min_a = min(min_a, a[i]);
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            min_b = min(min_b, b[i]);
        }
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int mega_moves = min(a[i] - min_a, b[i] - min_b);
            a[i] -= mega_moves;
            b[i] -= mega_moves;

            ans += mega_moves;
            ans += a[i] - min_a;
            ans += b[i] - min_b;
        }
        
        cout << ans << endl;
    }
    return 0;
}