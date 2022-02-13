// https://codeforces.com/contest/1637/problem/A
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

    bool possible = false;

    for (int i = 0; i < n; ++i) {
        int prefix_max = *max_element(arr.begin(), arr.begin() + i);
        int suffix_min = *min_element(arr.begin() + i, arr.end());
        possible |= (prefix_max > suffix_min);
    }

    cout << (possible ? "YES" : "NO") << endl;
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

