// https://codeforces.com/contest/1631/problem/A
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

    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int largest = -100;

    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i]) {
            swap(a[i], b[i]);
        }
        largest = max(a[i], largest);
    }

    int b_largest = -100;

    for (int i = 0; i < n; ++i) {
        b_largest = max(b[i], b_largest);
    }

    cout << (largest * b_largest) << endl;
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