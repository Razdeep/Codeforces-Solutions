// https://codeforces.com/contest/1637/problem/A
#include <algorithm>
#include <iostream>
#include <vector>

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

    auto sorted_arr = arr;
    sort(all(sorted_arr));

    bool same = true;

    for (int i = 0; i < n; ++i) {
        if (sorted_arr[i] != arr[i]) {
            same = false;
        }
    }

    cout << (!same ? "YES" : "NO") << endl;
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