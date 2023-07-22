// https://codeforces.com/contest/1850/problem/D
#include <iostream>
#include <vector>
#include <algorithm>
 
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
 
typedef long long ll;
 
using namespace std;
 
void solve() {
    
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int longest_streak = 1;
    int cur_streak = 1;

    for (int i = 1; i < n; ++i) {
        if (arr[i] - arr[i - 1] <= k) {
            cur_streak++;
            longest_streak = max(longest_streak, cur_streak);
        } else {
            cur_streak = 1;
        }
    }

    cout << (n - longest_streak) << endl;
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

