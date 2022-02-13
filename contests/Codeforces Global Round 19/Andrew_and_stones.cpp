// https://codeforces.com/contest/1637/problem/C
#include <iostream>
#include <vector>
#include <algorithm>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    
    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool all_ones = true;
    int ans = 0;
    for (int i = 1; i + 1 < n; ++i) {
        if (arr[i] != 1) {
            all_ones = false;
        }
        ans += arr[i] % 2 ? arr[i] / 2 + 1 : arr[i] / 2;
    }

    cout << (all_ones || (n == 3 and arr[1] & 1) ? -1 : ans) << endl;

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

