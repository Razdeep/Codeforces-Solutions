// https://codeforces.com/contest/1467/problem/B
#include <bits/stdc++.h>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(v) v.begin(), v.end()
#define int ll
typedef long long ll;
using namespace std;

bool isHillOrValley(const vector<int>& arr, int index) {
    if (index == 0 || index + 1 == int(arr.size())) {
        return false;
    }
    return (arr[index] > arr[index - 1] && arr[index] > arr[index + 1]) || (arr[index] < arr[index - 1] && arr[index] < arr[index + 1]);
}

void solve() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    if (n <= 2) {
        cout << 0 << endl;
        return;
    }

    int unchanged_intimidation = 0;
    vector<bool> hillValley(n, false);

    for (int i = 1; i + 1 < n; ++i) {
        unchanged_intimidation += isHillOrValley(arr, i);
        hillValley[i] = isHillOrValley(arr, i);
    }

    int ans = unchanged_intimidation;

    for (int i = 1; i + 1 < n; ++i) {
        int save = arr[i];
        arr[i] = arr[i - 1];
        ans = min(ans, unchanged_intimidation 
                        - hillValley[i - 1] - hillValley[i] - hillValley[i + 1] 
                        + isHillOrValley(arr, i - 1) + isHillOrValley(arr, i)
                        + isHillOrValley(arr, i + 1));

        arr[i] = arr[i + 1];
        ans = min(ans, unchanged_intimidation 
                        - hillValley[i - 1] - hillValley[i] - hillValley[i + 1] 
                        + isHillOrValley(arr, i - 1) + isHillOrValley(arr, i)
                        + isHillOrValley(arr, i + 1));
        
        arr[i] = save;
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

