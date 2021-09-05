// https://codeforces.com/contest/1555/problem/A
#include <algorithm>
#include <iostream>
#include <vector>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

int ceilDiv(int a, int b) { return a % b ? a / b + 1 : a / b; }

void solve() {
    int n;
    cin >> n;

    n = max(6LL, n);

    n += (n & 1);

    int ans = n * 5 / 2;

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
