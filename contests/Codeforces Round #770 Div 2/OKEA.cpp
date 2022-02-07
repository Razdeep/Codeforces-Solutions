// https://codeforces.com/contest/1634/problem/C
#include <iostream>
#include <vector>
#include <algorithm>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    
    int n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << "YES" << endl;
        for (int i = 1; i <= n; ++i) {
            cout << i << endl;
        }
    } else if (n & 1) {
        cout << "NO" << endl;
    } else {
        int last_odd = 1;
        int last_even = 2;
        cout << "YES" << endl;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= k; ++j) {
                if (i & 1) {
                    cout << last_odd << " ";
                    last_odd += 2;
                } else {
                    cout << last_even << " ";
                    last_even += 2;
                }
            }
            cout << endl;
        }
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}

