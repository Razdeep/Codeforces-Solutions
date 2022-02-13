// https://codeforces.com/contest/1637/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
#include <cassert>

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
    
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int cnt_zeros = 0;
            for (int k = i; k <= j; ++k) {
                cnt_zeros += (arr[k] == 0);
            }
            int contribution = j - i + 1 + cnt_zeros;
            ans += contribution;
        }
    }

    cout << ans << endl;

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