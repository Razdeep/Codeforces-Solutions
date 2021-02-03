// https://codeforces.com/contest/1365/problem/C
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> b_index_of(n + 1, -1);
    int i = 0;

    for (auto &it: a) {
        cin >> it;
    }

    for (auto &it: b) {
        cin >> it;
        b_index_of[it] = i++;
    }

    vector<int> votes(n, 0);
    
    for (int idx = 0; idx < n; ++idx) {
        int diff = (n + idx - b_index_of[a[idx]]) % n; 
        votes[diff]++;
    }

    int ans = *max_element(all(votes));
    
    cout << ans << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int tc = 1;
    // cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}