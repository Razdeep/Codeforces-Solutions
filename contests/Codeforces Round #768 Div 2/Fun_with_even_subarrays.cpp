// https://codeforces.com/contest/1631/problem/B
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

    reverse(all(arr));

    int ans = 0;
    int first_element = arr[0];

    for (int i = 1; i < n; ) {
        if (arr[i] == first_element) {
            ++i;
        } else {
            i *= 2;
            ans++;
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

