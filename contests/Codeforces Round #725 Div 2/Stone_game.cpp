// https://codeforces.com/contest/1538/problem/A

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

    int max_element = 0;
    int max_position = 0;

    int min_element = int(1e9);
    int min_position = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

        if (arr[i] > max_element) {
            max_element = arr[i];
            max_position = i;
        }
        
        if (arr[i] < min_element) {
            min_element = arr[i];
            min_position = i;
        }
    }

    int eating_from_left = max(min_position + 1, max_position + 1);
    int eating_from_right = max(n - min_position, n - max_position);
    int eating_from_sideways = 1 + min(max_position, min_position) + n - max(max_position, min_position);

    int moves = min({eating_from_left, eating_from_right, eating_from_sideways});

    cout << moves << endl;
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

