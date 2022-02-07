// https://codeforces.com/contest/1634/problem/B
#include <iostream>
#include <vector>
#include <algorithm>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> arr(n, 0);

    int odd_count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        odd_count += (arr[i] & 1);
    }

    if (odd_count & 1) {
        x++;
    }

    cout << (x % 2 == y % 2 ? "Alice" : "Bob") << endl;

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

