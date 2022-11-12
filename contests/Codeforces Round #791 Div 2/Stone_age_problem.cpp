// https://codeforces.com/contest/1679/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    
    int n, q;
    cin >> n >> q;

    vector<int> arr(n, 0);

    map<int, int> changes_since_flush;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        changes_since_flush[i] = arr[i];
    }

    int sum = std::accumulate(arr.begin(), arr.end(), 0ll);
    int flush_val = 0;
    

    while (q--) {
        int tp;
        cin >> tp;
        int pos, val;

        if (tp == 1) {

            cin >> pos >> val;

            pos--;

            if (changes_since_flush.find(pos) != changes_since_flush.end()) {
                sum -= changes_since_flush[pos];
            } else {
                sum -= flush_val;
            }

            changes_since_flush[pos] = val;
            sum += val;
            
            cout << sum << endl;

        } else {

            cin >> flush_val;

            sum = (flush_val * n);
            cout << sum << endl;
            changes_since_flush.clear();

        }
    }

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
