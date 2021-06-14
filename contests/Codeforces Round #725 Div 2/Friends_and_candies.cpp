// https://codeforces.com/contest/1538/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll

typedef long long ll;

using namespace std;

void solve() {
    
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    vector<int> freq(int(1e4) + 5, 0);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int sum = std::accumulate(all(arr), 0LL);

    if (sum % n == 0) {
        int average = sum / n;
        int ans = 0;

        for (int i = average + 1; i < int(freq.size()); ++i) {
            ans += freq[i];
        }

        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }

}

signed main()
{
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

